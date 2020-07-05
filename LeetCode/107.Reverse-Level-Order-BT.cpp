#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
// Problem Code 107
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
vector<vector<int>> ReverseLevelOrder(TreeNode* r)
{
    vector<vector<int>> res;
    // do bfs
    queue<TreeNode*> q;
    q.push(r);
    while(!q.empty())
    {
        // insert level wise
        vector<int> nodes;
        int n=q.size();
        while(n--)
        {
            TreeNode* t = q.front();
            q.pop();
            nodes.push_back(t->val);
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
        }
        res.push_back(nodes);
    }
    reverse(res.begin(),res.end());
    return res;
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
        vector<vector<int>> res = ReverseLevelOrder(root);
        loop(0,res.size())
        {
            for(int j=0;j<res[i].size();j++)
                cout<<res[i][j]<<" ";
            cout<<newline
        }
    }
    return 0;
}