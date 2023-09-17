while True:
    try:
        tipoNaveTobby, cantidadTobby = map(str,input().split())
        tipoNaveNab, cantidadNab = map(str,input().split())

        cantidadTobby = int(cantidadTobby)
        cantidadNab = int(cantidadNab)
        if(tipoNaveTobby==tipoNaveNab):
            if(cantidadTobby>cantidadNab):
                print("Tobby")
            elif(cantidadTobby<cantidadNab): 
                print("Naebbirac")
            elif(cantidadNab==cantidadTobby):
                print("Draw")

        if(tipoNaveTobby=="Battleships"):
            if(tipoNaveNab == "Destroyers" and (cantidadNab >= 2*cantidadTobby)):
                print("Naebbirac")
            elif tipoNaveNab == "Destroyers":
                print("Tobby")


        if(tipoNaveNab == "Battleships"):
            if(tipoNaveTobby == "Destroyers" and (cantidadTobby >= 2*cantidadNab)):
                print("Tobby")
            elif tipoNaveTobby == "Destroyers":
                print("Naebbirac")


        if(tipoNaveTobby=="Destroyers"):
            if(tipoNaveNab == "Cruisers" and (cantidadNab >= 2*cantidadTobby)):
                print("Naebbirac")
            elif(tipoNaveNab == "Cruisers"):
                print("Tobby")

        if(tipoNaveNab=="Destroyers"):
            if(tipoNaveTobby == "Cruisers" and (cantidadTobby >= 2*cantidadNab)):
                print("Tobby")
            elif(tipoNaveTobby == "Cruisers"):
                print("Naebbirac")


        if(tipoNaveTobby=="Cruisers"):
            if(tipoNaveNab == "Battleships" and (cantidadNab >= 2*cantidadTobby)):
                print("Naebbirac")
            elif(tipoNaveNab == "Battleships"):
                print("Tobby")

        if(tipoNaveNab=="Cruisers"):
            if(tipoNaveTobby == "Battleships" and (cantidadTobby >= 2*cantidadNab)):
                print("Tobby")
            elif(tipoNaveTobby == "Battleships"):
                print("Naebbirac")
    except:
        break