#ANIME SUGGESTIONS
while 1>0:
    print('Looking for anime? I can help! Tell me your tastes and I tell you your anime!')
    print('Type 1 or 2 ONLY')
    import random
    #######
    a=int(input('Romcom or Not Romcom?'))
    if a==1:
        b=int(input('Ecchi or Not?'))
        if b==1:
            c=int(input('"The Feels" or Comedy?'))
            if c==1:
                RET=['Rascal does not dream of Bunny Girl Senpai', 'Chivalry of a failed knight', 'Prison School']
                print('-------------------------')
                print('You Should Watch:')
                print(random.choice(RET))
            else:
                REC=[]
                print('-------------------------')
                print('Need to do more research :(')
        else:
            RN=['Kaguya-sama: Love is War', 'Love, Chuunibyou and other delusions', 'Horimiya', 'Nekopora', 'Fruits Basket', 'Love is hard for Otaku', 'My Dress-up Darling']
            print('-------------------------')
            print('You Should Watch:')
            print(random.choice(RN))
    else:
        print('WIP')
