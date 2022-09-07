#include<bits/stdc++.h>

using namespace std;
long long  i,j,k,l,n;



int main()
{
	cin>>n;
	int arr[n+2]={0};
	for(int i =1;i<=n-1;i++){
		int a;
		cin>>a;
		arr[a]++;
	}
	for(int i =1;i<=n;i++){

		if(arr[i]==0){
		    cout<<i;
			break;
		}
	}


    return 0;
}

