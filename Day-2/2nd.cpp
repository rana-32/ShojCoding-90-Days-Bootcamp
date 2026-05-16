#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
 
 
 
 
 
int main()
{
 
    int a[6][6];//array size always 
int x  , y ;
    for  (int i = 1; i<=5; i++)
    {
        for (int j = 1 ; j<=5 ; j++)
        {
            cin>>a[i][j];
            if (a[i][j]== 1 )
            {
             x = i ;  y= j ;
            }
        }
    }
 
cout<<abs (x-3) + abs (y-3)<<nl;
 
 
 
 
 
 
 
 
    return 0 ; 
}
