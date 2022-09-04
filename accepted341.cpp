#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll t;
vector<bool> check;
vector<vector<ll> > graph;
vector<ll> root;

vector<ll> ans1;
long long ans;
long long m = 0;
long long dfs(ll root){
     //cout<<"root="<<root<<endl;
    if(check[root]){
        return 0;
    }

    check[root]=true;
    for(ll i = 0;i<graph[root].size();i++){
        if(check[graph[root][i]]==false){
           return dfs(graph[root][i])+1;
        }
    }

}
long long dfs1(ll root){

    if(check[root]){
        return 1;
    }
    int temp  = 1;
    check[root]=true;
    for(ll i = 0;i<graph[root].size();i++){
        if(check[graph[root][i]]==false){
            temp = 1 + dfs1(graph[root][i]);
            if(temp==ans){
                ans1.push_back(graph[root][i]);
            }
        }
    }
    return temp;
}



ll solve(){
    cin>>n;
    root.resize(n+1,0);
    graph.resize(n+1,vector<ll>());
    check.resize(n+1,false);
    root[1]=1;
    for(ll i=2;i<=n;i++){
        cin>>root[i];
        graph[root[i]].push_back(i);
        graph[i].push_back(root[i]);
    }
    ans = dfs(1);
    cout<<endl;
    cout<<ans<<endl;
    check.clear();
    check.resize(n+1,false);
    //root[1]=1;
    dfs1(1);
    //cout<<ans1.size()<<endl;
    for(int i = 0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
    }


    ans=0;
    n = 0;
    graph.clear();
    root.clear();
    check.clear();
    return 0;
}

int main() {
//cin>>t;
//while(t>0){
    solve();
  //  t--;
//}

return 0;
}

