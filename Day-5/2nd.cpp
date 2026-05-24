#include <bits/stdc++.h>
using namespace std;
#define nl '\n'





int main()
{

int n ; cin>> n ;


 for (int i = n+1 ; ; i++)
 {
    int x = i ;
    int f= x%10 ;
    x=x/10 ;
    int s= x%10 ;
    x=x/10 ;
    int t= x%10 ;
    x=x/10 ;
    int fo= x%10 ;
    x=x/10 ;

if ( f != s and f != t and f!=fo and s != t and s!= fo and t !=fo  )
{
  
               cout<<fo<<t <<s<<f;          
               break ;
        
}

 }







    return 0 ; 
}
