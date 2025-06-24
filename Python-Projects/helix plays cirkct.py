#and cirket
import random as rn
N=[1,2,3,4,5,6]
#Balls
overs=int(input('How many overs game do you want to play?:'))
balls=(overs*6)
#Toss
oe=int(input('1:Odd and 2:Even'))
toss=0
while toss==0:
    if oe==1:       
        roll=int(input('Pick a number between 1 and 6:'))
        airoll=rn.randint(0,6)
        roll_sum=roll+airoll
        remain=roll_sum%2
        if remain==0:
            print('You won the toss!')
            toss=1
        else:
            print('You lost the toss!')
            toss=-1
    elif oe==2:
        roll=int(input('Pick a number between 1 and 6:'))
        airoll=rn.randint(0,6)
        roll_sum=roll+airoll
        remain=roll_sum%2
        if remain==0:
            print('You lost the toss!')
            toss=-1
        else:
            print('You won the toss!')
            toss=1
    else:
        print('Choose Number Between 1 and 6 u pls')
        oe = int(input('1:Odd and 2:Even'))
TC=['Batting', 'Bowling']
if toss==1:
    ch=int(input('batting:1,bowling:2'))
    if ch==1:
        print('You chose batting first!')
        #YOU BATTING
        uscore=0
        coun1=1
        while coun1>0:
            while coun1<balls:
                upull=int(input('Pick Number between 1 and 6:'))
                aipull=rn.randint(0,6)
                if upull in N:
                    if upull==aipull:
                        print('You are out! Your score:', uscore)
                        print('_-_-_-_-_-')
                        coun1=-1
                        break
                    else:
                        print('You pulled:', upull, 'Helix pulled:', aipull)
                        uscore=uscore+upull
                        print('Score:',uscore)
                        print('------------------')
                        coun1=coun1+1
                else:
                    print('Invalid input!')
                    continue
        print('Your inning score is:', uscore)
        print('-----------------------------')
        #Helix BATTING
        aiscore=0
        coun2=1
        while coun2>0:
            while coun2<balls:
                upull=int(input('Pick Number between 1 and 6:'))
                aipull=rn.randint(0,6)
                if upull in N:
                    if upull==aipull:
                        print('Helix is out! Helix scored:', aiscore)
                        print('_-_-_-_-_-_')
                        coun2=-1
                        break
                    else:
                        print('You pulled:', upull, 'Helix pulled:', aipull)
                        aiscore=aiscore+aipull
                        print('Score:',aiscore)
                        print('------------------')
                        coun2=coun2+1
                else:
                    print('Invalid Input!')
                    continue
        print('Helixs inning score is:', aiscore)
        print('-----------------------------')
        print('----------------------------------------------')
        print('Your score:', uscore, 'and Helix scored:', aiscore)
        if uscore>aiscore:
            print('You won!')
        else:
            print('You lost...')
    elif ch==2:
        print('You chose bowling first!')
        #Helix BATTING
        aiscore=0
        coun2=1
        while coun2>0:
            while coun2<balls:
                upull=int(input('Pick Number between 1 and 6:'))
                aipull=rn.randint(0,6)
                if upull in N:
                    if upull==aipull:
                        print('Helix is out! Helix scored:', aiscore)
                        print('_-_-_-_-_-_')
                        coun2=-1
                        break
                    else:
                        print('You pulled:', upull, 'Helix pulled:', aipull)
                        aiscore=aiscore+aipull
                        print('Score:',aiscore)
                        print('------------------')
                        coun2=coun2+1
                else:
                    print('Invalid Input!')
                    continue
        print('Helixs inning score is:', aiscore)
        print('-----------------------------')
        #YOU BATTING
        uscore=0
        coun1=1
        while coun1>0:
            while coun1<balls:
                upull=int(input('Pick Number between 1 and 6:'))
                aipull=rn.randint(0,6)
                if upull in N:
                    if upull==aipull:
                        print('You are out! Your score:', uscore)
                        print('_-_-_-_-_-_-_')
                        coun1=-1
                        break
                    else:
                        print('You pulled:', upull, 'Helix pulled:', aipull)
                        uscore=uscore+upull
                        print('Score:',uscore)
                        print('------------------')
                        coun1=coun1+1
                else:
                    print('Invalid Input!')
                    continue
        print('Your inning score is:', uscore)
        print('-----------------------------')
        print('----------------------------------------------')
        print('Your score:', uscore, 'and Helix scored', aiscore)
        if uscore>aiscore:
            print('You won!')
        else:
            print('You lost...')
    else:
        print('1 or 2 pls')
        ch=int(input('batting:1,bowling:2'))
else:
    chai=rn.choice(TC)
    if chai=='Batting':
        print('Helix chose batting first!')
        #Helix BATTING
        aiscore=0
        coun2=1
        while coun2>0:
            while coun2<balls:
                upull=int(input('Pick Number between 1 and 6:'))
                aipull=rn.randint(0,6)
                if upull in N:
                    if upull==aipull:
                        print('Helix is out! Helix scored:', aiscore)
                        print('_-_-_-_-_-_-_')
                        coun2=-1
                        break
                    else:
                        print('You pulled:', upull, 'Helix pulled:', aipull)
                        aiscore=aiscore+aipull
                        print('Score:',aiscore)
                        print('------------------')
                        coun2=coun2+1
                else:
                    print('Invalid Input!')
                    continue
        print('Helixs inning score is:', aiscore)
        print('-----------------------------')
        #YOU BATTING
        uscore=0
        coun1=1
        while coun1>0:
            while coun1<balls:
                upull=int(input('Pick Number between 1 and 6:'))
                aipull=rn.randint(0,6)
                if upull in N:
                    if upull==aipull:
                        print('You are out! Your score:', uscore)
                        print('_-_-_-_-_-_')
                        coun1=-1
                        break
                    else:
                        print('You pulled:', upull, 'Helix pulled:', aipull)
                        uscore=uscore+upull
                        print('Score:',uscore)
                        print('------------------')
                        coun1=coun1+1
                else:
                    print('Invalid Input!')
                    continue
        print('Your inning score is:', uscore)
        print('-----------------------------')
        print('----------------------------------------------')
        print('Your score:', uscore, 'and Helix scored', aiscore)
        if uscore>aiscore:
            print('You won!')
        else:
            print('You lost...')
    else:
        print('Helix chose bowling first!')
        #YOU BATTING
        uscore=0
        coun1=1
        while coun1>0:
            while coun1<balls:
                upull=int(input('Pick Number between 1 and 6:'))
                aipull=rn.randint(0, 6)
                if upull in N:
                    if upull==aipull:
                        print('You are out! Your score:', uscore)
                        print('_-_-_-_-_-_-')
                        coun1=-1
                        break
                    else:
                        print('You pulled:', upull, 'Helix pulled:', aipull)
                        uscore=uscore+upull
                        print('Score:',uscore)
                        print('------------------')
                        coun1=coun1+1
                else:
                    print('Invalid Input!')
                    continue
        print('Your inning score is:', uscore)
        print('-----------------------------')
        #Helix BATTING
        aiscore=0
        coun2=1
        while coun2>0:
            while coun2<balls:
                upull=int(input('Pick Number between 1 and 6:'))
                aipull=rn.randint(0,6)
                if upull in N:
                    if upull==aipull:
                        print('Helix is out! Helix scored:', aiscore)
                        print('_-_-_-_-_-_')
                        coun2=-1
                        break
                    else:
                        print('You pulled:', upull, 'Helix pulled:', aipull)
                        aiscore=aiscore+aipull
                        print('Score:',aiscore)
                        print('------------------')
                        coun2=coun2+1
                else:
                    print('Invalid Input!')
                    continue           
        print('Helixs inning score is:', aiscore)
        print('-----------------------------')
        print('----------------------------------------------')
        print('Your score:', uscore, 'and Helix score', aiscore)
        if uscore>aiscore:
            print('You won!')
        else:
            print('You lost...')
print('--------------------------------------------------------------')
        
        


















    
