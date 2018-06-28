def isPalindrome(s):
	i = 0
	while i < len(s)/2:
		if s[i] != s[len(s)-1-i]:
			return False
		i+=1
	return True


x = 999
y = x
prod = 0
largest = 0

while x > 99:
	while y > 99:
		prod = x*y
		if isPalindrome(str(prod))==True:
			if prod > largest:
				largest = prod
		y-=1
	x-=1
	y=x

print "The largest palindrome product of two %d-digit numbers is %d" % (len(str(x))+1,largest)