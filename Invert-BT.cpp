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
    if(no>=nodes.size())
        return NULL;
    TreeNode *node = new TreeNode(nodes[no]);
    node->left = build(nodes, 2*no);
    node->right = build(nodes, 2*no +1);
}
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> a(n+1, 0);
        loop(1,n)
            cin>>a[i];
    }
    return 0;
}