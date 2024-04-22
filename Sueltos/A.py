N = int(input())

entrada = input()
suma=0
bb=False
for i in range(N-1):
    if entrada[i]=='b':
        bb=False
    elif entrada[i]=='a' and entrada[i]==entrada[i+1] and not bb:
        bb=True
        suma+=2
    elif entrada[i]=='a' and entrada[i]==entrada[i+1]:
        suma+=1
print(suma)
        