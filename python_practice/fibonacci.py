def fib(n):
	if n <= 1:
		return n
	
	return fib(n-1) + fib(n-2)

print "*** FIBONACCI CALCULATOR ***\n"

while 1:
	n = input("Enter a number (-1 to quit): ")
	
	if n == -1:
		break
		
	m = fib(n)
	
	print "fib(%s) = %s\n" % (n, m)