while 1>0:
    #ID
    print('직원 아이디? (Eye Dee)')
    ID=int(input())
    #Name
    print('직원 이름? (namae wa xXCrinje_Master64209Xx)')
    Name=str(input())
    if Name.lower() == 'frodo':
    print("The salary is not for you, Frodo. But it is your burden to bear.")
    #Jungkook Oath
    print('이제 당신은 정국에게 대답할 때 진실을 말할 것을 맹세해야 합니다')
    print('_________________________________________________________')
    #*cough*
    #days worked
    print('일한 일수 (dayss)')
    d=int(input())
    #hours per day
    print('하루에 근무한 시간 (hours)')
    h=int(input())
    #hours overtimed
    print('시간 초과 근무 (ovretime in hours)')
    o=int(input())
    #paid lef
    print('유급휴일 (days ped lefs max 11)')
    p=int(input())
    #ebic calxultion
    wd=(d+p)*h
    sal=(wd*10000)+(o*8000)
    if p in range(1,12):
        print('ur richness amout to', sal, '₩')
        print('ⱼᵤₙ₉꜀ₒ꜀ₖ ᵢₛ ₚᵣₒᵤₙₔ ₒբ ᵤᵣ ᵥᵥₑᵣₖ')
    else:
        print('ur nt rich ths monh')
        print('ⱼᵤₙ₉꜀ₒ꜀ₖ ₛₐᵧₛ բᵤₖ ᵤ')
        
