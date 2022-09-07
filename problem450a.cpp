#include<bits/stdc++.h>

#include <vector>
using namespace std;
long long  i,j,k,l,n,m;

long a[105]={0};

int main()
{
    cin>>n;
    cin>>m;
    queue<pair<int,int>> q;
    for(int i = 1;i<=n;i++){
    	cin>>a[i];
    	q.push({i,a[i]});
	}
    while(q.size()>1){
        int temp = q.front().second;
        pair<int,int> t=q.front();

        temp = temp - m;
        if(temp>0){
            q.push({t.first,temp});
        }
        q.pop();
    }
    cout<<q.front().first;

    return 0;
}

