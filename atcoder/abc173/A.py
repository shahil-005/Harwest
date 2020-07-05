n=int(input())
ans=1000
if n<100:
    print(abs(n-ans))
    exit()
else:
    ans=1000
    while(n>ans):
        if ans==n:
            break
        elif ans>n:
            break
        else:
            ans+=1000
print(abs(n-ans))