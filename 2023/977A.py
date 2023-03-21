n=input().split()
k=[int(x) for x in n]
for i in range(k[1]):
    if k[0]%10==0:
        k[0]=k[0]/10
    else:
        k[0]-=1
print(int(k[0]))