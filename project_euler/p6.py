sum_of_squares = 0
square_of_sum = 0
n = 100

for x in range(1,n+1):
	sum_of_squares += x*x
	
for x in range(1,n+1):
	square_of_sum += x
	
square_of_sum *= square_of_sum

print "The difference between the square of the sums and the sum of the squares of the first %d natural numbers is %d" % (n,square_of_sum-sum_of_squares)