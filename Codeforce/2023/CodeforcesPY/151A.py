n,k,l,c,d,p,nl,np=map(int,input().split())
mililitrosTo=k*l
slidesTo=c*d
Tostadasnl=mililitrosTo//nl
sal=p//np
toastTO=min(slidesTo,min(Tostadasnl,sal))//n
print(toastTO)