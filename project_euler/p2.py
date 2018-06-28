num = 4000000
sum = 0
curr = 2
prev = 1

while curr <= num:
	if curr % 2 == 0:
		sum += curr
		
	temp = prev
	prev = curr
	curr += temp
	
print "The sum of number in the Fibonacci sequence that are even and not exceeding %d is %d" % (num, sum)
		
	