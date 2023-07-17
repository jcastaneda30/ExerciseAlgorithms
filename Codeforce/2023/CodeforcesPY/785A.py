diccionario={"Tetrahedron":4,"Cube":6,"Octahedron":8,"Dodecahedron":12,"Icosahedron":20}
n=int(input())
valor=0
for i in range(n):
    entrada=input()
    valor=valor+diccionario[entrada]
print(valor)
