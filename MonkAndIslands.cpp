#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void bfs(vector<ll> graph[],ll n)
{

   vector<ll> vis(n+1,-1);


   queue<ll> q;

   q.push(1);
   vis[1] = 0;//since 0 steps are taken...to reach here...
   
   while(!q.empty())
   {
       ll node = q.front();
       q.pop();
       
       //verify if its the n node 
       if(node == n)
         break;

       for(auto it : graph[node])
       {
           if(vis[it] == -1)
           {
               q.push(it);
               //and also update the steps...
               vis[it] = vis[node] + 1;//since 1 step is just taken...
           }
       }
   }


   cout<<vis[n]<<"\n";



}


int main()
{

    //this question boils down to find mimimum number of steps to reach the dest...
    //since its minimum so we will use bfs....

    //decode question...
    //given an undirected graph..
    //find mimimum number of steps to reach from 1 node to the n node...

    ll t;cin>>t;
    while(t--)
    {
        ll n,e;cin>>n>>e;

        vector<ll> graph[n+1];

        for(ll i=0;i<e;i++)
        {
            ll x,y;cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }//done...

        bfs(graph,n);

    }
    
}
