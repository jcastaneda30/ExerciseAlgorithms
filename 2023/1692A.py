cuantos=int(input())
for i in range(cuantos):
    cantidad=[int(x) for x in input().split()]
    delante=[x for x in cantidad if x>cantidad[0]]
    print(len(delante))