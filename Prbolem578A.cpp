#include<bits/stdc++.h>
using namespace std;
long long i,j,k,l,n;
main()
{  	cin>>n;
	long long a[n+2]={0};
	long long b[n+2]={0};
	long long sum = 0;
	long long sum1 = 0;
	long long max1=0;
	for(i=1; i<=n; i++){
		cin>>a[i];
	}
	for(i=1; i<=n; i++){
		cin>>b[i];
	}
	
	for( i = 1 ;i<=n;i++){
		sum = 0;
		sum1 = 0;
		for(int j = 1;j<=i;j++){
			if(sum==0){
				sum = sum + a[j];
			}else {
				sum = sum | a[j];
			}
			if(sum1==0){
				sum1= sum1 + b[j];
			}else{
				sum1 = sum1 | b[j];
			}
		
		}
		max1 = max(max1,sum+sum1);
	}
	cout<<max1;

}

