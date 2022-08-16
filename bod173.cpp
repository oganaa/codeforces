#include<bits/stdc++.h>
using namespace std;
long long i,j,k,l,n,res=0;
void test(){
	string s;
	cin>>s;
	n = s.size();

	if(n>2){
		for (long long  i = n-2;i>=0;i--){
			string str = s.substr(i,2);
			long long  x = str[0]-48;
			long long  y = str[1]-48;
			x=x*10+y;
			if(x%4==0){
                res = res + (i+1);
			}
		}
		//cout<<res<<endl;
		for(long long  i = 0;i<n;i++){
            long long  x = s[i]-48;
            if(x%4==0) res++;
		}
		cout<<res<<endl;
	}else if(n==2){
        for(long long  i = 0;i<n;i++){
            long long  x = s[i]-48;
            if(x%4==0) res++;
		}
		long long  x = s[0]-48;
        long long  y = s[1]-48;
        x=x*10+y;
        if(x%4==0){
            cout<<res+1<<endl;
        }else{
            cout<<res<<endl;
        }

	}else {
	    for(long long  i = 0;i<n;i++){
            long long  x = s[i]-48;
            if(x%4==0) res++;
		}
		cout<<res<<endl;
	}






}
main()
{  	int t=1;
    while(t>0){
        test();
        t--;
    }
}

