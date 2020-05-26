#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

TreeNode* build(vector<int> &A, int &i, int bound)
{
    if(i==A.size() || A[i] > bound) 
        return NULL;
    TreeNode* root = new TreeNode(A[i++]);
    root->left = build(A, i, root->val);
    root->right = build(A, i, bound);
    return root;
}
TreeNode* bstfromPreorder(vector<int> &A)
{
    int i=0;
    return build(A,i,INT_MAX);
}
void printLevelOrder(TreeNode* root)
{
    queue<TreeNode*> q;
    if(root==NULL)
        return;
    q.push(root);

    while(q.empty() == false)
    {
        TreeNode* n = q.front();
        if(n!=NULL)
            cout<<n->val<<" ";
        q.pop();

        if(n->left)
            q.push(n->left);

        if(n->right)
            q.push(n->right);
    }
}
int main()
{
    cout<<"Enter no. of elements in preorder of BST\n";
    int n;
    cin>>n;
    cout<<"Enter elements in preorder:\n";
    vector<int> preorder(n);
    loop(0,n)
        cin>>preorder[i];
    TreeNode *root = bstfromPreorder(preorder);
    cout<<"Level order of BST:\n";
    printLevelOrder(root);
    return 0;
}