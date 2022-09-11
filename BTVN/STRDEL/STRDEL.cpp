#include <bits/stdc++.h>

using namespace std;
string s;
int n;
int main()
{
    //freopen("STRDEL.inp","r",stdin);
    //freopen("STRDEL.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s;

        for(unsigned int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1] && s[i]=='B')
                {
                    s.erase(s.begin()+i-1);
                    s.erase(s.begin()+i);
                }
            else if(s[i]=='B' && s[i-1]=='A')
                {
                    s.erase(s.begin()+i-1);
                    s.erase(s.begin()+i);
                }
        }
        cout<<t<<'\n';
        t=0;
    }
    return 0;
}
