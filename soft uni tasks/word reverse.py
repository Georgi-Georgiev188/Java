word = str(input())
reverses = ""
for i in range(len(word) -1, -1, -1):
    reverses += word[i]
print(reverses)
