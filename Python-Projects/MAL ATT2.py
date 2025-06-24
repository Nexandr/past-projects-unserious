import pandas as pd
mal_list=[]
switch=1
count=0
while switch>0:
    swt=int(input('"9" to terminate, any other integer to continue...'))
    if swt!=9:
        anime=input('Anime Name:')
        rating=float(input('Rating:'))
        mal_dict={'Name:': anime, 'Rating': rating}
        mal_list.append(mal_dict)
        count=count+1
        print('___________________________')
    else:
        switch=-2
print('____________________________________________________________________________________')
mal=pd.DataFrame(mal_list, index=range(1,count+1))
print(mal)
