s=[2,4,6,8,2]
s.append(22)
print(s)

s+=[44,88]
print(s)

s.pop(0)
print(s)

s.insert(0,90)
print(s)

s.remove(2)
print(s)

del s[4]
print(s)

import random

s=[2,4,6,8,2]
random.shuffle(s)
print(s)
print(random.choice(s))

s.reverse()
print(s)

s=[45,10,55,5,35]
s.sort()
print(s)

s.sort(reverse=True)
print(s)

s1=["s","t","a","E","f"]
s1.sort(key=str.lower)
print(s1)
s1.sort()
print(s1)

k=(7,5,3)
print(k)

tup= tuple([10,20,30])
print(tup)

tupl= tuple("Python")
print(tupl)