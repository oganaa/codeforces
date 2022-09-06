#include<bits/stdc++.h>

using namespace std;
long long  i,j,k,l,n;



int main()
{
	cin>>n;
	int arr[n+2];
	for(int i =1;i<=n-1;i++) cin>>arr[i];

	for(int i =1;i<=n-1;i++){
		if(n==arr[i]){
			cout<<i;
			return 0;
		}
	}
    return 0;
}

