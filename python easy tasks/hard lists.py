# napishete programa v koqto se suzdava chislov spisuk, toi se zapulva sus sluchaini chisla,
# sled tova mejdu vsqka dvoika elementi ot tozi spisuk se vmukva nov raven na sumata ot stoinostite
# na predhodnite 2 elementa
import random
List = [random.randint (10,20)for i in range (16)]

for i in range (0, 22, +3):
    List.insert(i+2, List[i] + List[i+1])

print(List)



