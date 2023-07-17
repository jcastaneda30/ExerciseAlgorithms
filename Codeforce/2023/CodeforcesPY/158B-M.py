import math
n=int(input())
grupos=[int(x) for x in input().split()]
taxis=0
grupos4=[x for x in grupos if x==4]
grupos3=[x for x in grupos if x==3]
grupos2=[x for x in grupos if x==2]
grupos1=[x for x in grupos if x==1]
gr4=len(grupos4)
gr3=len(grupos3)
gr2=len(grupos2)
gr1=len(grupos1)
taxis+=gr4
taxis+=gr3
gr1=gr1-gr3
if gr1<0:
    gr1=0
if gr2%2==0:
    taxis+=gr2/2
else:
    gr2=gr2//2+1
    taxis+=gr2
    gr1=gr1-2
    if(gr1<0):
        gr1=0
gr1=math.ceil(gr1/4)
taxis+=gr1
print(int(taxis))