
// Problem : D - Replacing
// Contest : AtCoder - AtCoder Beginner Contest 171
// URL : https://atcoder.jp/contests/abc171/tasks/abc171_d
// Memory Limit : 1024 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;

#define endl                    '\n'
#define rep()                   for(LL i = 0 ; i < n ; i++)
#define f(i,s,n)                for(LL i = s ; i < n ; i++)
#define fe(i,s,n)               for(LL i = s ; i <= n ; i++)
#define rfe(i,s,n)              for(LL i = s ; i >= n ; i--)
#define auto(m)                 for(auto &it:m)
#define f2(it,v)                for(it = v.begin(); it != v.end(); ++it)
#define fori(it, x)             for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define ip(n,a)                 LL n;cin>>n;LL a[n];rep(){cin>>a[i];}
#define op(n,a)                 f(i,0,n){cout<<a[i]<<" ";}cout<<endl;
#define i2p(n,k,a)              LL n,k;cin>>n>>k;LL a[n];rep{cin>>a[i];}
#define TCs(x)                  LL x; cin>>x; while(x--)
#define TC(x)                   LL x=1; while(x--)
#define mp                      make_pair
#define pb                      push_back
#define ff                      first
#define ss                      second
#define all(v)                  v.begin(), v.end()
#define mem(a,x)                memset(a,x,sizeof(a))
#define Max(x,y,z)              max(x,max(y,z))
#define Min(x,y,z)              min(x,min(y,z))
#define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ps(x)                   std::cout << std::fixed; std::cout << std::setprecision(x);
#define clz(a)                  __builtin_clz(a) // count leading zeroes (geeksforgeeks.org/builtin-functions-gcc-compiler/)
#define ctz(a)                  __builtin_ctz(a) // count trailing zeroes
#define popc(a)                 __builtin_popcount(a) // count set bits (for ints only diff for ll)
#define GCD(A,B)                __gcd(A,B)
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
typedef vector<VL>              VVL;
typedef vector<string>          VS;
typedef vector<char>            VC;
typedef pair<LL,LL>             PLL;
typedef pair<string,LL>         PSL;
typedef pair<LL,string>         PLS;
typedef pair<char,LL>           PCL;
typedef pair<LL,char>           PLC;
typedef pair<string,string>     PSS;
typedef pair<char,char>         PCC;
typedef vector<PLL>             VPLL;
typedef vector<PSL>             VPSL;
typedef vector<PLS>             VPLS;
typedef vector<PCL>             VPCL;
typedef vector<PLC>             VPLC;
typedef vector<PSS>             VPSS;
typedef vector<PCC>             VPCC;
typedef map<LL,LL>              MLL;
typedef map<string,LL>          MSL;
typedef map<char,LL>            MCL;
typedef set<LL>                 SL;
typedef set<string>             SS;
typedef set<char>               SC;

int power(LL x,LL y)
{
    if (y == 0)
    return 1;
    LL p = power(x, y/2);
    p = (p * p);

    return (y%2 == 0)? p : (x * p);
}           
const long long N=(long long)(1e5+1);
const long long N2=(long long)(1e6+1);
const long long MOD=(long long)(1e9+7);
const long long INF=(long long)(2e18);

void solve()
{
	LL n;
	cin>>n;
	LL a[n+1];
	MLL m;
	LL sum=0;
	fe(i,1,n){
		cin>>a[i];
		m[a[i]]++;
		sum+=a[i];
	}
	LL q;
	cin>>q;
	LL x;
	while(q--){
		LL b,c;
		cin>>b>>c;
		sum=sum-b*m[b]+c*m[b];
		m[c]+=m[b];
		m[b]=0;
		cout<<sum<<endl;
	}
}
int main()
{
        fastIO
        TC(t){solve();}
        return 0;
}