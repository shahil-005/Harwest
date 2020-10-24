#include <bits/stdc++.h>
using namespace std;
#define endl    '\n'
typedef long long  LL;
const long long N=(long long)(1e6+1);
const long long MOD=(long long)(1e9+7);

const long long INF=(long long)(2e18);

int main()
{
	//39 27
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	LL n;
	cin>>n;
	vector<LL> powerof3,powerof5;
	LL x=1;
	LL cnt=0;
	while(x<INF){
		powerof3.push_back(x);
		x*=3;
		cnt++;
	}
	x=1;
	cnt=0;
	while(x<INF){
		powerof5.push_back(x);
		x*=5;
		cnt++;
	}
	LL f=0;
	LL n1=powerof3.size();
	LL n2=powerof5.size();
	for(LL i=1;i<n1;i++){
		for(LL j=1;j<n2;j++){
			LL num1=powerof3[i];
			LL num2=powerof5[j];
			if(num1+num2==n){
				cout<<i<<" "<<j<<endl;
				f=1;
				break;
			}
		}
		if(f){break;}
	}
	if(f==0){
		cout<<-1<<endl;
	}
	
      	
        return 0;
}