#include<bits/stdc++.h>
using namespace std;
long i,j,k,l,n;

void test(){
    cin>>n;
    if(n<2){
        cout<<2<<endl;
    }else {
        long x = n / 3;
        long m = n%3;

        if((n+2)%3==0){
            cout<<n/3+1<<endl;
        }else if((n-2)%3==0){
            cout<<n/3+1<<endl;
        }
        else if(m==0){
            cout<<x<<endl;
        }
        else if(m==1){
            if(n%2==0){
                cout<<min(n/2,x+2)<<endl;
            }else {
                cout<<(x+2)<<endl;
            }
        }
        else if(m==2){
            if(n%2==0){
                cout<<min(n/2,x+1)<<endl;
            }else {
                cout<<(x+1)<<endl;
            }
        }

    }


}

main()
{  	int t;
    cin>>t;
    while(t>0){
        test();
        t--;
    }
}

