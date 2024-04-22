casos = int(input())

for i in range(casos):
        horas, minutos = input().split(':')
        horas=int(horas)
        if horas == 0:
            print(f'12:{minutos} AM')
        elif horas < 12:
            if horas<10:
                horas = '0'+str(horas)
            print(f'{horas}:{minutos} AM')
        elif horas == 12:
            print(f'12:{minutos} PM')
        else:
            horas=horas-12
            if horas<10:
                horas = '0'+str(horas)
            print(f'{horas}:{minutos} PM')

