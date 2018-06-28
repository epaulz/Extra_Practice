import math

prod = 0
a = 0
b = 0
c = 0
n = 1000

for i in range(0,n):
	for j in range(0,n):
		b = a+1
		c = (a+i)*(a+i)+(b+j)*(b+j)
		c = math.sqrt(c)
		if (a+i)+(b+j)+c == n:
			prod = (a+i)*(b+j)*c
			break
	a+=1

if prod == 0:
	print "No such Pythagorean triplet found"
else:
	print "The product of the Pythagorean triplet that produces a+b+c=%d is %d" % (n,prod)
