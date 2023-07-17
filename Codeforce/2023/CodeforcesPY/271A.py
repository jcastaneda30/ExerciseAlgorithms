n=list(input())
año=False
while año==False:
    n="".join(n)
    k=int(n)
    k+=1
    n=list(str(k))
    if len(n)==len(set(n)):
        año=True
print(int("".join(n)))