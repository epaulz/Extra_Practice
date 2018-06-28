def even(n):
	return n/2

def odd(n):
	return 3*n+1
	
max = 1000000
chain_len = 0
num = 0
chain = []

for i in range(1,max):
	chain = [i]
	j=i
	while True:
		if chain[len(chain)-1] == 1:
			if len(chain) > chain_len:
				chain_len = len(chain)
				num = i
			break
			
		if chain[len(chain)-1]%2==0:
			chain.append(even(chain[len(chain)-1]))
		else:
			chain.append(odd(chain[len(chain)-1]))


print "The number under %d that produces the longest Collatz sequence is %d with a chain length of %d" % (max,num,chain_len)
	