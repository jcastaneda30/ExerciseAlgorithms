entrada = input()
if "7" in entrada:
    if int(entrada)%7==0:
        print(3)
    else:
        print(2)
else:
    if int(entrada)%7==0:
        print(1)
    else:
        print(0)