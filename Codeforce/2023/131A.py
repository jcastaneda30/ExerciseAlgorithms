minuscula = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
mayuscula = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
entrada=input()
count=0
count2=0
for i in entrada:
    if i in minuscula:
        count+=1
    if i in mayuscula:
        count2+=1
if entrada[0] in minuscula and count==1:
        a=entrada.capitalize()
        print(a)
elif count2==len(entrada):
        a=entrada.lower()
        print(a)
else:
      print(entrada)