#Choices
jjk=0
csm=0
ds=0
JJK='Jujutsu Kaisen'
CSM='Chainsaw Man'
DS='Demon Slayer'
anime = {'Jujutsu Kaisen':JJK,'Chainsaw Man':CSM,'Demon Slayer':DS}
print('Type "1" for option 1, "2" for 2')
print('--------------------------------')
##########
print(JJK,'or', CSM)
a=int(input())
if a==1:
    jjk+=1
elif a==2:
    csm+=1
else:
    print('1 or 2 pls')
##########
print(JJK,'or', DS)
b=int(input())
if b==1:
    jjk+=1
elif b==2:
    ds+=1
else:
    print('1 or 2 pls')
##########
print(CSM,'or', DS)
c=int(input())
if c==1:
    csm+=1
elif a==2:
    ds+=1
else:
    print('1 or 2 pls')
##########
print(ds, csm, jjk)
