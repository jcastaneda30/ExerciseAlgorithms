while True:
    try:
        n, plataManuel = map(int, input().split())
        platica = list(map(int, input().split()))

        plataDebe = sum(platica) + plataManuel
        print(plataDebe)
    except EOFError:
        break
