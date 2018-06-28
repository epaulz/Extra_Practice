n=100
fact=1

while n > 0:
    fact *= n
    n -= 1

sum = 0
for i in range(0,len(str(fact))):
        sum += int(str(fact)[i])

print(sum)
