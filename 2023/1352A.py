n=int(input())
for i in range(n):
    entrada=list(input())
    cantidad=[int(x) for x in entrada]
    for i in range(len(cantidad)):
        cantidad[i]=cantidad[i]*10**(len(cantidad)-i-1)
    round=[x for x in cantidad if x!=0]
    round=[str(x) for x in round]
    print(len(round))
    print(" ".join(round))
