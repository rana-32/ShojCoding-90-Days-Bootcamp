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
 

int  k , w , n ; cin>> k >> n >> w ;
int sum = 0 ;

for (int i = 1 ; i<= w ; i++)
{
  sum =  sum +  k*i ;
}
if ( sum > n ){
int ans = sum  - n ;
cout<<ans ;
}
else 
{
    cout<<'0';
}







    
}

int main() {
    FAST_IO

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
