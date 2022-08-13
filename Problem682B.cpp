#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,n;
main()
{  	cin>>n;
	int a[n+2]={0};
	for(i=1; i<=n; i++)
	cin>>a[i];
	sort(a+1,a+n+1);
	
	a[1] = 1;
	for(int i = 2;i<=n;i++){
		if(a[i]!=a[i-1]&&a[i-1]+1!=a[i]){
			a[i] = a[i-1]+1;
		}	
	}
	cout<<a[n]+1;
	

	
}
