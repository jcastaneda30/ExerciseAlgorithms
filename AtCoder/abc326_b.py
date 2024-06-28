N=input()
provitional = N
numerico = int(N)
while True:
    if (int(provitional[0])*int(provitional[1]))==int(provitional[2]):
        print(provitional)
        break
    else:
        numerico+=1
        provitional=str(numerico)
