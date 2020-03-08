//shahil_005
//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
//const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int32_t main()
{
    string s;
    cin >> s;
    int n = s.size();
    int flag =0;
    for(int i=0;i<=n-1;i+=2)
    {
        if(s[i] == 'h' && s[i+1] == 'i')
        {
            continue;
        }
        else
        {
            flag =1;
        }
    }
    if(flag == 1)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}

