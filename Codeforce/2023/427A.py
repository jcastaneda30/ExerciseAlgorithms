import sys
 
n = int(sys.stdin.readline().strip())
crimines = 0
policias = 0
sucesos = [int(x) for x in sys.stdin.readline().split()]
for i in sucesos:
    if i > 0:
        policias += i
    elif i == -1 and policias > 0:
        policias -= 1
    elif i == -1 and policias == 0:
        crimines += 1
print(crimines)