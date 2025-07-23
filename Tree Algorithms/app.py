import requests
import json

# API endpoint and base parameters
base_url = "https://unstop.com/api/public/live-leaderboard/328025/assessmentnewround"
params = {
    "page": 1,
    "per_page": 30,
    "filterName": "timestamp",
    "filterValue": "1752585617",
    "undefined": "true"
}

filtered_teams = []

while True:
    response = requests.get(base_url, params=params)
    if response.status_code != 200:
        print(f"Failed to fetch page {params['page']}, status code:", response.status_code)
        break

    data = response.json().get("data", {})
    teams = data.get("data", [])

    if not teams:
        break  # No more teams

    for team_data in teams:
        team = team_data.get("team", {})
        players = team.get("players", [])
        
        # Check if any player is from NIT Patna
        for player in players:
            if player.get("organisation", "").strip() == "National Institute of Technology (NIT), Patna":
                filtered_teams.append(team_data)
                break  # No need to check further players in this team

    print(f"Checked page {params['page']}")

    params["page"] += 1

# Save filtered result to JSON
with open("nit_patna_teams.json", "w", encoding="utf-8") as f:
    json.dump(filtered_teams, f, indent=2, ensure_ascii=False)

print("Saved filtered teams from NIT Patna to nit_patna_teams.json")
