#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(ll arr[],ll key,ll target,ll n)
{
 
  //here we have different states for each point..
  //so if we have checked a point then we will not check it again...


   vector<ll> vis(100001,-1);//untill this key we will store all the minimum point...

   //now take the q..
   queue<ll> q;

   q.push(key);
   vis[key] = 0;//since we are starting at this point...so...

   while(!q.empty())
   {

      ll node = q.front();
      q.pop();

      //if we have envountered the target then break...
      if(node == target)
        break;//because untill now we would have marked the new step to reach this point...
        else{

            //for each valid node
            //we will take some decisions...
            //if its not visited then...
            for(ll i=0;i<n;i++){

                ll newNode = node*arr[i];
                newNode %= 100000;

                //now check if this node is visited already....
                if(vis[newNode] == -1)
                 {
                     //this means its not explored yet...
                     //update the steps now...
                     vis[newNode] = vis[node] + 1;//since one step has been taken...
                     //then put the newNode for further reference...
                     q.push(newNode);
                 }

            }



        }

   }


   //at last if the node is not marked that means we could not arrive there...
   cout<<vis[target];
  


}


int main()
{
    ll key,target;cin>>key>>target;

    ll n;cin>>n;

    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    solve(arr,key,target,n);//here we will use bfs...


    
}
