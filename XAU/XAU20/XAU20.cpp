#include<bits/stdc++.h>
using namespace std;

char* kq(char* a, char chr, char* b)
{
  int c;
  int d = 0;
  for ( c= 0; a[c] != '\0'; c++)
    {
    if ( a[c] != chr )
        {
      b[d] = a[c];
      d++;
    }
  }
  b[d] = '\0';
  return b;
}

int main(){
  char s[1012];
  char b[1012];
  char chr = 'a';
  cin>>s;
  cin>>chr;

  cout<<kq(s,chr,b)<<endl;

  return 0;
}
