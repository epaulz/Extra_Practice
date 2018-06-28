import math

def isPrime(num):
	for x in range (2,int(math.sqrt(num)+1)):
		if num!=x:
			if num%x==0:
				return False
	return True

n = 2000000
sum = 0

for i in range(2,n):
	if isPrime(i)==True:
		sum += i

print "The sum of all prime numbers below %d is %d" % (n,sum)