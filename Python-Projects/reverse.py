#Reverse number
while 1>0:
    n=int(input('Enter your number:'))
    a=0
    while n>0:
        b=n%10
        a=(a*10)+b
        n=n//10
    print('Revrs',a)
    print('-------------------------------------------------')


    
