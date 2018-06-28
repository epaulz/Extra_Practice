import math

def isPrime(num):
	for x in range (2,int(math.sqrt(num)+1)):
		if num!=x:
			if num%x==0:
				return False
	return True

n=10001
primes=[]

k=2
while len(primes) < n:
	if isPrime(k)==True:
		primes.append(k)
	k+=1
	
print "The %d(th/rd) prime number is %d" % (n,primes[len(primes)-1])