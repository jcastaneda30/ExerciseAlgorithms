def main():
    t = int(input())

    for _ in range(t):
        n, k = map(int, input().split())

        problems = list(map(int, input().split()))
        problems.sort()

        g = n
        hola = 0
        while g > 1 and hola < len(problems) - 1:
            diff = problems[hola + 1] - problems[hola]
            if diff > k:
                problems.insert(hola + 1, 0)
                g += 1
                hola += 1
                n += 1
            hola += 1
            g -= 1

        secuencias = []
        count = 0
        for tr in range(n):
            if problems[tr] != 0 and tr != n - 1:
                count += 1
            else:
                if problems[tr] != 0:
                    count += 1
                secuencias.append(count)
                count = 0

        max_element_iter = max(secuencias)
        suma = sum(secuencias)
        print(suma - max_element_iter)


if __name__ == "__main__":
    main()
