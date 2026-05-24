#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);
inline ceil_div(long long  a, long long  b) {
    return (a + b - 1) / b;
}
inline void toLowerCase(string &s)
{
    transform(s.begin(), s.end(), s.begin(), ::/*toupper*/tolower);
}

void solve() 
{
 int n ; int h ;
 cin>> n >> h ;

 int a[n];

 for (int i =0 ; i< n; i++)
 {
    cin>>a[i];
 }
int sum =0 ;
 for (int i = 0 ; i< n; i++)
 {
   
if (a[i]<= h )
{
    sum +=1 ;
}
else 
{
    sum += 2;
}




 }

cout<<sum<<nl;









    
}

int main() {
    FAST_IO

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
