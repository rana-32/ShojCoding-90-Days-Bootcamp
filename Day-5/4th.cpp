#include <bits/stdc++.h>
using namespace std;
#define nl '\n'





int main()
{

int n ; cin>> n ;

int flag =0 ; 

int a[n];

for (int i= 0 ; i< n; i++)
{
   cin>> a[i];
}
for (auto it : a)
{
   if (it == 1 )
   {
      flag = 1 ;
      break ;
   }
}

if (flag ==1 )
{
   cout<<"HARD"<<nl;
}
else 
{
   cout<<"EASY"<<nl;
}




   return 0 ; 
}
