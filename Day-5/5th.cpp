#include <bits/stdc++.h>
using namespace std;
#define nl '\n'





int main()
{
int n ; cin>> n ;
int t; cin>> t ;
string s ; cin>> s ;
string  x= "";
while (t--){
for (int i = 1 ; i<s.size()  ; i++)
{
if (s[i-1]=='B' and s[i]=='G')
{
   swap(s[i-1] , s[i]);
   i++;

}



}
}

cout<<s<<nl;






   return 0 ; 
}
