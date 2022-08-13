#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,n,m;
main()
{  	
	cin>>n;
	string s = "";
	int j = 1;
	for(int i = 1;i<=n;i++){
		int a = i;
		string r ="";
		while(a>0){
			
			int m = a%10;
			j++;
			char ch = m + 48;
			r = r + ch;
			a=a/10;
		}
		reverse(r.begin(), r.end());
//		cout<<r<<"\n";
		s=s+r;
	}
	cout<<s[n-1];


}

