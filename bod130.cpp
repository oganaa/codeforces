#include <bits/stdc++.h>
using namespace std;
int n, t, ans = 0;
double a[15][15];
void reverseStr(string &str)
{
    int len = str.length();
    int n = len - 1;
    int i = 0;
    while (i <= n)
    {
        swap(str[i], str[n]);
        n = n - 1;
        i = i + 1;
    }
}
string deleteSpace(string s)
{
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            s.erase(i, i + 1);
            i--;
        }
        else
            break;
    }
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    bool isComma =false;
    string result = "";
    s = deleteSpace(s);
    reverseStr(s);
    s = deleteSpace(s);
    reverseStr(s);


    n = s.size();
    int a = n;

    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    string res = "";

    a = s.size();
    int i = 0;
    while (i < a)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            res = res + ' ';
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == ' ')
                {
                    i++;
                }
                else
                    break;
            }
        }
        else
        {
            res = res + s[i];
        }
        i++;
    }
    s = res;
    res = "";
    i = 0;
    a = s.size();


    while (i < a)
    {
        if ((s[i] == ',' && s[i + 1] == ',') || (s[i] == ',' && s[i + 1] == '.') || (s[i] == ',' && s[i + 1] == ' '))
        {
            res = res + ",";
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == ' ' || s[j] == ',' || s[j] == '.')
                {
                    i++;
                }
                else
                    break;
            }
        }
        else
        {
            res = res + s[i];
        }
        i++;
    }
    s = res;
    res = "";
    i = 0;
    a = s.size();
    while (i < a)
    {
        if ((s[i] == '.' && s[i + 1] == ',') || (s[i] == '.' && s[i + 1] == '.') || (s[i] == '.' && s[i + 1] == ' '))
        {
            res = res + ".";
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == ' ' || s[j] == ',' || s[j] == '.')
                {
                    i++;
                }
                else
                    break;
            }
        }
        else
        {
            res = res + s[i];
        }
        i++;
    }
    for (int i = 0; i < a; i++)
    {
        if (res[i] == ' ' && res[i + 1] == ',')
        {
            char temp = res[i];
            res[i] = res[i + 1];
            res[i + 1] = temp;

        }
        else if (res[i] == ' ' && res[i + 1] == '.')
        {
            char temp = res[i];
            res[i] = res[i + 1];
            res[i + 1] = temp;

        }
    }
    string str1 = " ";
    for (int i = 0; i < a; i++)
    {
        if (res[i] == ',' && res[i + 1] != ' ')
        {
            res.insert(i + 1, str1);
            a++;
        }
        else if (res[i] == '.' && res[i + 1] != ' ')
        {
            res.insert(i + 1, str1);
            a++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (res[i] == '.' && res[i + 1] == ' ')
        {
            res[i + 2] = toupper(res[i + 2]);
        }
    }
    cout << res;
    return 0;
}

