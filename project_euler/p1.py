num = 1000
sum = 0

for x in range(1,num):
	if x % 3 == 0 or x % 5 == 0:
		sum += x
		
print "The sum of multiples of 3 or 5 below %d is %d" % (num, sum)
