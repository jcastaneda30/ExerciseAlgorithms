casos = int(input())

for i in range(casos):
    n = int(input())
    for j in range(n):
        if j%2==0:
            for k in range(n):
                if k%2==0:
                    print('##',end='')
                else:
                    print('..',end='')   
            print() 
            for k in range(n):
                if k%2==0:
                    print('##',end='')
                else:
                    print('..',end='')
        else:
            for k in range(n):
                if k%2==1:
                    print('##',end='')
                else:
                    print('..',end='')    
            print() 
            for k in range(n):
                if k%2==1:
                    print('##',end='')
                else:
                    print('..',end='')
        print()