primos = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]

def comparation(left,center,right):
    if (left+center in primos) and (right+center in primos):
        return center
    
while True:
    try:
        tamaño = int(input())
    except EOFError:
        break