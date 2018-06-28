k=20
def divisible(num):
	i = k
	while i > 0:
		if num%i != 0:
			return False
		i-=1
	return True
	
x = k
while True:
	if divisible(x)==True:
		break
	x+=1
	
print "The smallest positive number that is evenly divisible by all numbers from 1-%d is %d" % (k,x)