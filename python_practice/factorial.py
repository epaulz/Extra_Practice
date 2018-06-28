def fact(n):
	f = 1
	for i in range(2,n+1):
		f *= i
	return f
	
print "*** FACTORIAL CALCULATOR ***\n"

while 1:
	n = input("Enter a number (-1 to quit): ")
	
	if n == -1:
		break
	
	m = fact(n)
	
	print "%s! = %s\n" % (n, m)