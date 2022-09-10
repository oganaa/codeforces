#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    int l = 0, r = 0, a = 0, ans = 0;
    while (r < n)
    {

        if (s[r] == 'a')
            a++;

        if (a <= t)
        {
            ans = max(ans, (r - l + 1));
        }

        while (a > t)
        {
            if (s[l] == 'a')
                a--;
            l++;
        }
        // cout<<"r= "<<r<<"uyd "<<"a= "<<a<<"t= "<<t<<"ans= "<<ans<<"l= "<<l<<endl;
        r++;
    }
    l = 0;
    r = 0;
    int b = 0;
    while (r < n)
    {
        if (s[r] == 'b')
            b++;
        if (b <= t)
        {
            ans = max(ans, (r - l + 1));
        }
        while (b > t)
        {
            if (s[l] == 'b')
                b--;
            l++;
        }
        // cout<<"r= "<<r<<"uyd "<<"b= "<<b<<"t= "<<t<<"ans= "<<ans<<"l= "<<l<<endl;
        r++;
    }
    cout << ans;
}
