power = 1000
prod = 1
sum = 0

for i in range(0,power):
	prod *= 2
	
for i in range(0,len(str(prod))):
	sum += int(str(prod)[i])
	
print prod
print "The sum of the digits of 2^%d is %d" % (power,sum)