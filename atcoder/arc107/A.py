a,b,c=map(int,input().split())
a=(a*(a+1))//2
b=(b*(b+1))//2
c=(c*(c+1))//2

ans=a*b*c
mod=998244353
ans=ans%mod
print(ans)