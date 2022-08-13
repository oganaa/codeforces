#include<bits/stdc++.h>
using namespace std;
long long a,i,j,k,l,n,m,s=1;

main()
{  	
	cin>>n;
	int arr[n+1][n+1]={0};
	for(int i =1;i<=n;i++){
		arr[i][1]=1;
		arr[1][i] = 1;
	}
	for(int i =2;i<=n;i++){
		for(int j =2;j<=n;j++){
			arr[i][j] = arr[i-1][j]+arr[i][j-1];
		}
	}
	
//	
//	for(int i =1;i<=n;i++){
//		for(int j =1;j<=n;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<"\n";
//	}	
cout<<arr[n][n];

}

