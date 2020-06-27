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
int sumall(TreeNode* t,int sum)
{
    if(t==NULL)
        return 0;
    sum = sum*10 + t->val;
    if(t->left==NULL && t->right==NULL)
        return sum;
    return sumall(t->left,sum) + sumall(t->right,sum);
}
int main()
{
    OJ;
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

        cout<<"Sum of Numbers formed by BT: "<<sumall(root,0)<<newline
    }
    return 0;
}