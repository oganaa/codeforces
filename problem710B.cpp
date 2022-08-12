#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,n,a[300005];
main()
{  cin>>n;
	for(i=1; i<=n; i++)
	cin>>a[i];
	sort(a+1,a+n+1);


	k = n/2+n%2;
	cout<<a[k];
}

