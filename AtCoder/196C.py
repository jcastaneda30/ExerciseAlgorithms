N=int(input())

for i in range(int(1e6)+1):
    if(int(str(i)*2)>N):
        print(i-1)
        break