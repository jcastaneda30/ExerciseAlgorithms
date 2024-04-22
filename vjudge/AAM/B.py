K,G,M=map(int,input().split())
vaso=0
mug=0
for i in range(K):
    if(vaso==G):
        vaso=0
        continue
    elif mug==0:
        mug=M
        continue
    else:
        falta=G-vaso
        if(mug>=falta):
            vaso=vaso+falta
            mug-=falta
        else:
            vaso+=mug
            mug=0
        continue
print(vaso,mug)