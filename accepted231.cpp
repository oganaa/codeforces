#include<bits/stdc++.h>
using namespace std;
long long i,j,k,l,n,a1,a2,a3,a4;
main()
{
    int sum = 0;
    string s;
    cin>>a1>>a2>>a3>>a4;
    cin>>s;
    for( i = 0;i<s.size();i++){
        char ch = s[i]-48;
        int a = ch;

        if(a==1)
            sum = sum + a1;
        else if(a==2)
        sum = sum + a2;
        else if(a==3)
        sum = sum + a3;
        else sum+=a4;
    }
    cout<<sum;
}

