#include<bits/stdc++.h>
using namespace std;
long i,j,k,l,n;
void test(){
	cin>>n;
	string s[n+2];
	int left=0,right=0,down = 0,top = 0;
	for(int i = 0;i<n;i++){
		cin>>s[i];
	}
	for(int i = 0;i<n;i++){

		for(int j=0;j<n;j++){
 left=0,right=0,down = 0,top = 0;
			if(j+1<n&&s[i][j+1]=='o'){
                left++;
			}
			if(j-1>-1&&s[i][j-1]=='o'){
                right++;
			}
			if(i+1<n&&s[i+1][j]=='o'){
                top++;
			}
			if(i-1>-1&&s[i-1][j]=='o'){
                down++;
			}

			int sum = left+right+top+down;
            if(sum%2==1){
                cout<<"NO";
                exit(0);
            }
		}

	}
	cout<<"YES";
}
main()
{  	int t=1;
    while(t>0){
        test();
        t--;
    }
}

