left="qwertasdfgzxcvb"
right="yuiophjklnm"
palabra = input()
switchLEFTRIGH=True
comprobacion=True
for i in palabra:
    if switchLEFTRIGH == True:
        if i not in left:
            comprobacion=False
        switchLEFTRIGH=False
        continue
    if switchLEFTRIGH == False:
        if i not in right:
            comprobacion=False
        switchLEFTRIGH=True
        continue
comprobacion2=True
switchLEFTRIGH=True
for i in palabra:
    if switchLEFTRIGH == True:
        if i not in right:
            comprobacion2=False
        switchLEFTRIGH=False
        continue
    if switchLEFTRIGH == False:
        if i not in left:
            comprobacion2=False
        switchLEFTRIGH=True
        continue
            
if comprobacion2==True or comprobacion==True:
    print("yes") 
else:
    print("no")

