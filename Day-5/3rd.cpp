#include <bits/stdc++.h>
using namespace std;
#define nl '\n'



int main()
{


int n ; cin>> n ;
vector<int> vec;
int sum = 0 ;
for (int i = 0 ; i<2* n ; i++)
{
   int a ; cin>>a ;
   if ( i%2==0)
   {
      sum -=a ;
   }
   else 
   {
      sum +=a;
   }
   vec.push_back(sum);

}
auto m = max_element (vec.begin() , vec.end());
cout<<*m<<nl;





   return 0 ; 
}
