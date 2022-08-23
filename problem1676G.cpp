#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll t;
vector<bool> check;
vector<vector<ll> > graph;
vector<ll> root;
string s;
long long ans;

pair<ll,ll> dfs(ll root){
    if(check[root]){
        return {0,0};
    }
    check[root]=true;
    ll b=0,w=0;
    if(s[root-1]=='B'){
        b++;
    }else{
        w++;
    }

    for(ll i = 0;i<graph[root].size();i++){
        if(check[graph[root][i]]==false){
            pair<ll,ll> temp=dfs(graph[root][i]);
            b+=temp.first;
            w+=temp.second;
        }
    }
    if(b==w){
        ans++;
    }
    return {b,w};

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
    cin>>s;
    dfs(1);
    cout<<ans<<endl;
      ans=0;
    s.clear();
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

