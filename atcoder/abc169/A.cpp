#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define endl                    '\n'
//#define IOS                   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep()                   for(LL i = 0 ; i < n ; i++)
#define f(i,s,n)                for(LL i = s ; i < n ; i++)
#define fe(i,s,n)               for(LL i = s ; i <= n ; i++)
#define rfe(i,s,n)              for(LL i = s ; i >= n ; i--)
#define TCs(x)                  LL x; cin>>x; while(x--)
#define TC(x)                   LL x=1; while(x--)
#define f2(it,v)                for(it = v.begin(); it != v.end(); ++it)
#define fori(it, x)             for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define auto(m)                 for(auto &it:m)
#define ip(n,a)                 LL n;cin>>n;LL a[n];rep{cin>>a[i];}
#define ip2(n,a,b)              LL n;cin>>n;LL a[n];LL b[n];rep{cin>>a[i];} rep{cin>>b[i];
#define op(n,a)                 f(i,0,n){cout<<a[i]<<" ";}
#define i2p(n,k,a)              LL n,k;cin>>n>>k;LL a[n];rep{cin>>a[i];}
#define mp                      make_pair
#define pb                      push_back
#define ff                      first
#define ss                      second
#define all(v)                  v.begin(), v.end()
#define vsort(v)                sort(all(v))
#define vrsort(v)               reverse(all(v))
#define Max(x,y,z)              max(x,max(y,z))
#define Min(x,y,z)              min(x,min(y,z))
//#define ps(x,y)               fixed<<setprecision(y)<<x
//#define ps(x)                 std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)                  __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)                  __builtin_ctz(a) // count trailing zeroes
//#define ctz(a)                __builtin_ctzll(a)
#define popc(a)                 __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define GCD(A,B)                __gcd(A,B)
//#define LCM(A,B)              boost::math::lcm(A,B)
//#define COUNT(v,x)             count(all(v),x)
//#define COUNT(v,x)             count(all(s),'x')
#define trace(x)                 cout<<x<<endl
#define trace1(x)                cout<<#x<<": "<<x<<endl
#define trace2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

//Typedefs:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef string                  S;
typedef long long               LL;
typedef long double             LD;
typedef unsigned long long      ULL;
typedef vector<long long>       VL;
typedef vector<string>          VS;
typedef vector<char>            VC;
typedef pair<LL,LL>             PLL;
typedef pair<string,LL>         PSL;
typedef pair<LL,string>         PLS;
typedef pair<char,LL>           PCL;
typedef pair<LL,char>           PLC;
typedef vector<PLL>             VPLL;
typedef vector<PSL>             VPSL;
typedef vector<PLS>             VPLS;
typedef vector<PCL>             VPCL;
typedef vector<PLC>             VPLC;
typedef map<LL,LL>              MLL;
typedef map<string,LL>          MSL;
typedef map<char,LL>            MCL;
typedef set<LL>                 SL;
typedef set<string>             SS;
typedef set<char>               SC;

//Functions:----------------------------------------------------------------------------------------------------------------------------------------------------------------------
clock_t time_p=clock();
void shahil_005()
{
    time_p=clock()-time_p;
    cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}
//------------------------------------------------------------------------------------//
int power(LL x,LL y)
{
    if (y == 0)
    return 1;
    LL p = power(x, y/2);
    p = (p * p);

    return (y%2 == 0)? p : (x * p);
}
//....................................................................................//
int lcm(LL a,LL b)
{
    LL lar = max(a, b);
    LL small = min(a, b);
    for (LL i = lar; ; i += lar) {
    if (i % small == 0)
        return i;
    }
}
//....................................................................................//
int gcd(LL a,LL b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
//....................................................................................//
int bsearch(LL arr[],LL l,LL r,LL x)
{
    while (l <= r)
    {
    LL m = l + (r - l) / 2;
    if (arr[m] == x){
        return m;
    }
    if (arr[m] < x){
        l = m + 1;
    }
    else
        r = m - 1;
    }
    return -1;
}
//....................................................................................//
bool prime(LL n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}
//....................................................................................//

bool sortbysec(const pair<LL,LL> &a, 
                   const pair<int,int> &b) 
{ 
       return (a.second<b.second); 
}

//Constants:----------------------------------------------------------------------------------------------------------------------------------------------------------------------
const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

//Solve:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::




void solve()
{
        LL a,b;
        cin>>a>>b;
        cout<<a*b;
        
        
























}

int main ()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif


        TC(t)
        {
                solve();
        }

        shahil_005();
        return 0;
}
/** notes to me from me ---------       // Not mine but helpful
         *
         * aim:
         *      - not to achieve high rating but to improve as a problem solver
         *      - to focus more on solving problems than rating
         *
         * i must remember the following:
         *      - check for overflow
         *      - check for out of bounds read/write
         *      - check for any other errors that will hinder you from AC on first submission
         *      - check logic for special/boundary cases
         *      - think simple, fast and efficient. no need to make things complicated
         *      - spending time to think and test your approach is more valuable than wasting
         *        time on submission and then debugging a wrong solution. you've proven myself
         *        from experience many times. dont be stupid anymore and actually remember this.
         *      - no need to use fancy coding styles and techniques. keep it simple
         *      - don't blank out in the last 30 mins
         *      - no stress at all. stay calm. cool, we got this nigga
         *      - stop checking standings/dashboard. stop comparing
         *      - read all problem statements. sometimes the D's are easier to solve than the B's
         *      - write your ideas down. you've forgotten them a couple of times in the past
         */