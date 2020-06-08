/*
Invert Binary Tree
*/
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
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};
TreeNode* build(vector<int> nodes,int no)
{
    // cout<<no<<newline
    if(no>=nodes.size())
        return NULL;
    TreeNode *node = new TreeNode(nodes[no]);
    node->left = build(nodes, 2*no);
    node->right = build(nodes, 2*no +1);
    return node;
}
void inorder(TreeNode *t)
{
    if(t)
    {
        inorder(t->left);
        cout<<t->val<<newline;
        inorder(t->right);
    }
}
TreeNode* invert(TreeNode *t)
{
    if(t)
    {
        swap(t->left,t->right);
        invert(t->left);
        invert(t->right);
    }
    return t;
}
int main()
{
    OJ;
    int n;
    cin >> n;
    vector<int> a(n+1, 0);
    loop(1,n+1)
        cin>>a[i];
    TreeNode* root = build(a,1);
    root = invert(root);
    inorder(root);
    return 0;
}