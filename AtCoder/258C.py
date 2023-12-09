N, Q = map(int, input().split())
palabra = input().strip()

for _ in range(Q):
    try:
        op, x = map(int, input().split())
        inicio = len(palabra) - x
        if op == 1:
            palabra = palabra[inicio:] + palabra[:inicio]
        else:
            print(palabra[x - 1])
    except:
        pass