#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&& s[i]<='9')
        {
            d++;
        }
    }
    cout<<d;
    return 0;
}
