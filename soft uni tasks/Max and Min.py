import sys
m = -sys.maxsize - 1 #-Min, and Max integers 

for i in range (3):
    g = int(input())
    for i in range (3):
        if g > m:
            m = g
print(m)            