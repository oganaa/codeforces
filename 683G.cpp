#include<bits/stdc++.h>
using namespace std;
long i,j=1,k=-1,l=-1,n,oron=1,number=0,oron1 = 1,number1=0;

void test(){
	string s;
    cin>>s;
	n = s.size();

	for(int i = 2;i<n;i++){
		if(s[i]=='('){
			k=i;
		}
		if(s[i]==')'){
			l=i;
		}
	}
	string str1=s.substr(2,k-2);
	string str2=s.substr(k+1,l-k-1);
	string str3=str1+str2;

  /*  if(str2=="0"){

         for(int i = 0;i<str1.size();i++){
            oron = oron*10;
            char ch=str1[i];
            int x = (int)ch - 48;
            number = number*10 + x%10;
        }
        cout<<__gcd(number,oron);
        // while(__gcd(number,oron)!=1){
            number = number/__gcd(number,oron);
            oron = oron/__gcd(number,oron);
        //}
		cout<<number<<"/"<<oron;
    }else{*/
        for(int i = 0;i<str3.size();i++){
            oron = oron*10;
            char ch=str3[i];
            int x = (int)ch - 48;
            number = number*10 + x%10;
        }
        for(int i = 0;i<str1.size();i++){
            oron1 = oron1*10;
            char ch=str1[i];
            int x = (int)ch - 48;
            number1 = number1*10 + x%10;
        }
        number = number - number1;
        oron = oron - oron1;
        //while(__gcd(number,oron)!=1){
            int res1 = number/__gcd(number,oron);
            int res2 = oron/__gcd(number,oron);
            number = number/__gcd(number,oron);
            oron = oron/__gcd(number,oron);
        //}
		cout<<res1<<"/"<<res2;
    //}


}

main()
{  	int t=1;
    while(t>0){
        test();
        t--;
    }
}

