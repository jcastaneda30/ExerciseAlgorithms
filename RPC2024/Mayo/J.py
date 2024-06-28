def calcular_area_poligono(vertices):
    n = len(vertices)
    area = 0
    for i in range(n):
        x1, y1 = vertices[i]
        x2, y2 = vertices[(i + 1) % n]  
        area += (x1 * y2 - x2 * y1)
    return abs(area) / 2.0

n = int(input())

vertices = []

for _ in range(n):
    x, y = map(int, input().split())
    vertices.append((x, y))

diferencia_minima = float('inf')

for i in range(n):
    for j in range(n):
        area1 = calcular_area_poligono(vertices[i:j+1])
        area2 = calcular_area_poligono(vertices[j:] + vertices[:i+1])
        diferencia = abs(area1 - area2)
        diferencia_minima = min(diferencia_minima, diferencia)

print(round(diferencia_minima,1))
