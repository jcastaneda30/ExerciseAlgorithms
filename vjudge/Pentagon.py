from collections import deque

class Grafo:
    def __init__(self):
        self.grafo = {}

    def agregar_nodo(self, nodo):
        if nodo not in self.grafo:
            self.grafo[nodo] = []

    def agregar_arista(self, nodo1, nodo2):
        
        self.grafo[nodo1].append(nodo2)
        self.grafo[nodo2].append(nodo1)  

    def obtener_vertices(self):
        return list(self.grafo.keys())

    def obtener_aristas(self):
        aristas = []
        for nodo, vecinos in self.grafo.items():
            for vecino in vecinos:
                if (nodo, vecino) not in aristas and (vecino, nodo) not in aristas:
                    aristas.append((nodo, vecino))
        return aristas

    def distancia_entre_nodos(self, inicio, destino):
        
        if inicio not in self.grafo or destino not in self.grafo:
            return -1  
        visitados = set()
        cola = deque([(inicio, 0)])

        while cola:
            nodo_actual, distancia = cola.popleft()

            if nodo_actual == destino:
                return distancia

            if nodo_actual not in visitados:
                visitados.add(nodo_actual)
                cola.extend((vecino, distancia + 1) for vecino in self.grafo[nodo_actual])

        return -1  

    def __str__(self):
        return f"Grafo: {self.grafo}"

# Ejemplo de uso
grafo = Grafo()
grafo.agregar_nodo("A")
grafo.agregar_nodo("B")
grafo.agregar_nodo("C")
grafo.agregar_nodo("D")
grafo.agregar_nodo("E")
grafo.agregar_arista("A", "B")
grafo.agregar_arista("B", "C")
grafo.agregar_arista("C", "D")
grafo.agregar_arista("D", "E")
grafo.agregar_arista("E", "A")

valorA=list(input())
valorB=list(input())

distanciaA=grafo.distancia_entre_nodos(valorA[0],valorA[1])
distanciaB=grafo.distancia_entre_nodos(valorB[0],valorB[1])

if(distanciaA==distanciaB):
    print("YES")
else:
    print("NO")