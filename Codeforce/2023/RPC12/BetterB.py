lados = int(input())
dadoFirst = list(map(int,input().split()))
dadoSecond = list(map(int,input().split()))
dadoFirst.sort()
dadoSecond.sort()
sinFirst=[x for x in dadoFirst if x not in dadoSecond]
sinSecond=[x for x in dadoSecond if x not in dadoFirst]
sinFirst.sort()
sinSecond.sort()
positivas = 0
negativas = 0
for i in range(len(sinFirst)):
    if(sinFirst[i]-sinSecond[i]>0):
        positivas+=1
    if(sinFirst[i]-sinSecond[i]<0):
        negativas+=1
if(positivas>negativas):
    print("first")
elif(positivas<negativas):
    print("second")
else:
    print("tie")