List = [1, 0, 1, 2, 0, 1, 3]
g = List.count(0)
while List.count(0) != 0:
    List.remove(0)
for i in range (g):
    List.append(0)
print(List)
