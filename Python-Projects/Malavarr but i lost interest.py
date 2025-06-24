#TEXT-BASED ADVENTURE
import random as rn
import time
print('========================================================================TALES OF MALAVARR THE BOLD==========================================================================')
print('                                                                                                                                                                          Enter "A" to continue...                                                                                                                                                            ')
start=str(input())
if start=='A' or start=='a':
    print('The sun shines on the thatched roof of your house. The birds are chirping, and the village is rousing.')
    print('Somewhere outside, a rooster roosts, signalling the oncoming of dawn. It is also the sound that wakes you up.')
    print('You get out of bed and head towards the only window in your small home. A brilliant sun is shining down onto the earth and you feel like something is calling you out.')  
    print('Is there something that you are forgetting...?')   
    print('Is it a birthday?')
    print('...Or a meeting somewhere...?')   
    print('*BANG!*')   
    print('It is someone on your door!')    
    print('*BANG BANG BANG*')
    door=input('Open? (Reply in Y or y to open, anything else to leave it.)')
    exel1hp=120
    if door=='Y' or door=='y':
        print('You walk over to the wooden oak door. You take a moment to appreciate the carpentry in the carvings and choice of gloss.')
        print('You pull the handle and the door swings open.')
        print('The sky outside is a hellish blend of black and red. The sun is shining violet and pink and blood red, the clouds are black as coal.')
        print('A loud screech fills your ears and turns the insides of your brain to mush. You hold your head in pain and your eyes blur...')
        print('A black figure approaches you...')
        galarbn_hp=2000
        playerhp=300
        while playerhp>0:
            galarbn_hp=2000
            while playerhp>0:
                print('-----------------------------------------')
                print('         GALARBN THE RED          ')
                print('HP:', galarbn_hp)
                print('-----------------------------------------')
                print('                     YOU                       ')
                print('HP:', playerhp)
                print('_________________________')
                print('Attacks: 1)Run    2)Run    3)Run    4)Run')
                atk=int(input('Choose your attack!'))
                if atk in range(1,5):
                    print('To run is to die...')
                    print('     -100 HP!      ')
                    playerhp=playerhp-100
                else:
                    print('To stay is to die.')
                    print('----------------------------------')
                    exel1hp=-30
                    playerhp=-30
        print('_______________________')
        print('          YOU DIED           ')
    else:
        print('You glance over to the door...and notice that it has bulged outwards from the banging. Will it break?')
        print('\n "It might be my only chance..."')
        print('You fling yourself outwards and land onto a bush. The leaves rustle under you as you make off away from the house and towards a gully that leads away from the back of your home.')
        print('You see a small hut, just like yours, in the distance, and immediately recognize it as the home of your friend, Drohr.')
        print('You run up to the apsen door and knock.')
        print('...There is no reply...')
        print('You knock again.')
        print('...There is still no reply...')
        print('\n "DROHR!, ARE YOU THERE?"')
        print('The door abruptly opens and you almost trip over with it. A bearded man in his early 50s looks at you with bleary eyes.')
        name=str(input('\n Man:"WHO DA HELL DO YOU THINK YOU ARE BANGING ON MY DOOR SUCH EARLY IN THE MORNING?" (Enter your name...)'))
        print('Man:' ,name, '...? Never heard of that name... what do you want?')
        print('\n"Is Drohr here?"')
        print('\n Man: Drohr? Mah son aint here. Might be he is out near Violessas garden... he hangs out there almost every morning...')
        print('The man starts to swing the door closed and before you even get a chance to thank him, the door is shut.')
        print('Auntie Violessas garden...huh?')        
else:
    print('Welp. *leaves*')
