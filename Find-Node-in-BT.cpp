#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    Find Node exists in BST
*/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x),left(nullptr),right(nullptr){}
};
TreeNode* bstfromlevelorder(vector<int> a,int i)
{
    if(i>=a.size())
        return NULL;
    TreeNode* t = new TreeNode(a[i]);
    t->left = bstfromlevelorder(a, 2*i);
    t->right = bstfromlevelorder(a,2*i + 1);
    return t;
}
int find(TreeNode *t,int node)
{
    if(t==NULL)
        return 0;
    if(t->val == node)
        return 1;
    else if(t->val<node)    
        return find(t->right,node);
    return find(t->left, node);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cout<<"Enter no. of nodes\n";
        cin >> n;
        vector<int> a(n+1, 0);
        loop(1,n+1)
            cin>>a[i];
        TreeNode* root = bstfromlevelorder(a,1);
        int node;
        cout<<"Enter node to find\n";
        cin>>node;
        if(find(root,node))
            cout<<"Found";
        else
            cout<<"Not found";
    }
    return 0;
}