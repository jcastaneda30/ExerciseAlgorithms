O,A,K = map(int,input().split())
monda = True
for i in range(1,151):
    for j in range(1,151):
        if(i*A+j*K==O):
            monda = False
            print(1)
            break
    if(not monda):
        break
if(monda):
    print(0)