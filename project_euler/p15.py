def lattice(m,n):
	count = [[0 for x in range(m)] for y in range(n)]

	# paths to reach any cell in first column is 1
	for i in range(m):
		count[i][0] = 1

	# paths to reach any cell in first row is 1
	for j in range(n):
		count[0][j] = 1

	for i in range(1,m):
		for j in range(n):
			count[i][j] = count[i-1][j] + count[i][j-1]
	
	return count[m-1][n-1]


x = 21
y = 21

print "The number of possible routes through a %dx%d grid is %d" % (x,y,lattice(x,y))
	
