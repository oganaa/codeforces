#include <bits/stdc++.h>
using namespace std;
bool tenth(int m)
{
    if (m == 1)
    {
        return true;
    }
    else if (m > 1 && m < 10)
    {
        return false;
    }
    else
    {
        while (m > 9)
        {
            int n = m % 10;
            if (n != 0)
            {
                return false;
            }
            m = m / 10;
        }
        if (m == 1)
        {
            return true;
        }
        else
            return false;
    }
}
int main()
{
    long n, m, a[10005], b[100005];
    cin >> n >> m;
    int ans = 0;
    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            ans = ans + b[i] - a[i];
            ans = ans + 1;
        }
        cout << ans;
    }
    else if (m != 1 && tenth(m))
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            ans = ans + b[i] - a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (a[i] % m != 0)
                {
                    ans = ans + (a[i] % m);
                }
                else
                {
                    ans = ans + (m);
                }
            }
            else
            {
                // cout<<"i= "<<i<<"b= "<<a[i]<<"a-1= "<<b[i-1];
                int l = a[i] - b[i - 1];
                if (l % m != 0)
                {
                    //   cout<<l<<endl;
                    ans = ans + (l % m);
                }
                else
                {
                    ans = ans + (m);
                }
            }
        }
        cout << ans;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            ans = ans + b[i] - a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (a[i] % m != 0)
                {
                    ans = ans + (a[i] % m);
                }
                else
                {
                    ans = ans + (m);
                }
            }
            else
            {
                // cout<<"i= "<<i<<"b= "<<a[i]<<"a-1= "<<b[i-1];
                int l = a[i] - b[i - 1];
                if (l % m != 0)
                {
                    ans = ans + (l % m);
                }
                else
                {
                    ans = ans + (m);
                }
            }
        }
        cout << ans;
    }
}
