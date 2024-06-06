palabra1 = input()
palabra2 = input()

newPa1 = palabra1
newPa2 = palabra2

vocal1 = None
vocal2 = None

vocales = "aeiou"

for i in range(1,len(palabra1)):
    if palabra1[i] in vocales:
        newPa1=palabra1[:i]
        vocal1=palabra1[i]
        break
for i in range(len(palabra2) - 2, -1, -1):
    if palabra2[i] in vocales:
        newPa2=palabra2[i+1::]
        vocal2=palabra2[i]
        break

if(vocal2):
    print(f"{newPa1}{vocal2}{newPa2}")
elif(vocal1):
    print(f"{newPa1}{vocal1}{newPa2}")
else:
    print(f"{newPa1}o{newPa2}")