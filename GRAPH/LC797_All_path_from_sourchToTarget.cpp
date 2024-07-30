
// link :https://leetcode.com/problems/all-paths-from-source-to-target/description/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;


bool all_path(int crnt)
{
    queue<int>q;
    for(int i=0;i<adj[crnt].size();i++)
    {
        q
    }

}

int main()
{
    int node,edge,i,j,k;
    cin>>node>>edge;
    i=edge;
    while(i--)
    {
        cin>>j>>k;
        adj[j].push_back(k);
    }
    all_path(0);
}
