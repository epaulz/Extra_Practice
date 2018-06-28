num = 600851475143
i = 2
x = num

while x > 1:
	if x%i==0:
		x/=i
		i-=1
	i+=1

print "The largest prime factor of %d is %d" % (num, i)
