#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n , m ;
    cin>>n>>m;
    string s[100];

    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    for(int i = 0;i<m;i++){
        queue<char> q={};
        for(int j = 0;j<n;j++){
            if(s[j][i]=='*'||s[j][i]=='o'){
                q.push(s[j][i]);
            }else {
                q.push(push(s[j][i])
            }
        }
        cout<<q.size()<<endl;
        for(int j = 0;j<n;j++){

            if(q.size()>0){
                if((s[n-1-j][i]=='.'||s[n-1-j][i]=='*')&&q.front()=='*'){
                    s[n-1-j][i] = q.front();
                    q.pop();
                }else if((s[n-1-j][i]=='.'||s[n-1-j][i]=='*')&&q.front()=='o'){
                    if(q.size()>n-1-j)
                    s[n-1-j][i] = '.';
                }else if((s[n-1-j][i]=='o')&&q.front()=='o'){
                    q.pop();
                }
            }else{
                if(s[n-1-j][i]!='o'){
                    s[n-1-j][i] = '.';
                }
            }
        }
    }
    cout<<endl;
    for(int i = 0;i<n;i++){

        for(int j = 0;j<m;j++){
            cout<<s[i][j];
        }
        cout<<"\n";
    }




}

