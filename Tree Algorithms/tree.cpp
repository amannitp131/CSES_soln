#include <bits/stdc++.h>
using namespace std;

class Node {
public:  // Add public access specifier
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }

};

//////////////////////////////
// Normal methods of traversal
//////////////////////////////
void inorder_traversal(Node* root) {
    if (root == nullptr) return;
    inorder_traversal(root->left);
    cout << root->data;
    inorder_traversal(root->right);
}

void preorder_traversal(Node* root) {
    if (root == nullptr) return;
    cout << root->data;
    preorder_traversal(root->left);
    preorder_traversal(root->right);

}
void postorder_traversal(Node* root) {
    if (root == nullptr) return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->data;
}

vector<vector<int>> levelorder_traversal(Node* root) {
    vector<vector<int>> ans;
    if (root == nullptr) return ans;

    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        vector<int> level;
        for (int i = 0;i < n;i++) {
            if (q.front()->left != nullptr) {
                q.push(q.front()->left);
            }
            if (q.front()->right != nullptr) {
                q.push(q.front()->right);
            }
            level.push_back(q.front()->data);
            q.pop();
        }
        ans.push_back(level);
    }
    return ans;
}

///////////////////////////////////////////////
// Iterative methods of traversal (using stack)
///////////////////////////////////////////////

vector<int> iterative_inorder_traversal(Node* root) {
    vector<int> ans;
    stack<Node*> st;
    Node* curr = root;

    while (curr != nullptr || !st.empty()) {

        while (curr != nullptr) {
            st.push(curr);
            curr = curr->left;
        }

        ans.push_back(st.top()->data);
        st.pop();

        curr = curr->right;

    }
    return ans;
}

vector<int> iterative_preorder_traversal(Node* root) {
    vector<int> ans;
    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* curr = st.top();
        st.pop();
        ans.push_back(curr->data);

        if (curr->right != nullptr) {
            st.push(curr->right);
        }
        if (curr->left != nullptr) {
            st.push(curr->left);
        }

    }
    return ans;
}

vector<int> iterative_postorder_traversal(Node* root) {
    vector<int> ans;
    stack<Node*> st;
    while(!st.empty()){
        Node* curr=st.top();
        st.push(curr);
        st.pop();
        while(curr->right!=nullptr){
           st.push(curr->right);
        }
        st.push(curr->left);
    }
}



int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->left->right = new Node(30);
    root->right = new Node(40);
    root->right->left = new Node(50);

}