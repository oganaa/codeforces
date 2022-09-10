#include<bits/stdc++.h>


using namespace std;
long long  i,j,k,l,n;
string s;
string isPalindrome(string S)
{
    string P = S;


    reverse(P.begin(), P.end());
 	if (S == P) {

        return "yes";
    }
    else {
        return "no";
    }
}



int main()
{
    cin>>s;
	cin>>k;
    n = s.size();
    if (n%k) { cout << "NO"; return 0; }
 	for(long long  i = 0;i<n;i = i + (n / k)){
        string str = s.substr(i,n/k);
        if(isPalindrome(str)!="yes"){
            cout << "NO"; return 0;
        }
 	}
    cout << "YES";
    return 0;
}
