rojos, azules=map(int,input().split())
diasimpar=0
if rojos==azules:
    diasimpar=rojos
    rojos=0
    azules=0
elif rojos>azules:
    diasimpar=azules
    rojos=rojos-azules
    azules=0
elif rojos<azules:
    diasimpar=rojos
    azules=azules-rojos
    rojos=0
diaspar=0
if rojos==0:
    while azules>1:
        azules=azules-2
        if azules>=0:
            diaspar=diaspar+1
elif azules==0:
    while rojos>1:
        rojos=rojos-2
        if rojos>=0:
            diaspar=diaspar+1
print(diasimpar,diaspar)