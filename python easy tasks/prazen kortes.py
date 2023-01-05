# n = int(input("Enter a value:"))
# a = None
# for i in range (1, n+1):
#     a = input("Enter a number:")
#     g =
#     tup = tuple([g])
#     print(tup)
t1 = ()
t2 = ()
n = int(input("Enter a number:"))
for i in range (1, n + 1):
    t1 += (i,)
    t2 = sorted(t1, reverse = True)
print(t1)
print(t2)