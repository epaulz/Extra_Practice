import math

tri_num = 0
factor_count = 0
factor_goal = 500

i = 1
while True:
	factor_count = 0
	tri_num += i
	
	for j in range(1, int(math.sqrt(tri_num))):
		if tri_num % j == 0:
			factor_count += 2  # 2 factor because so we can only check numbers under
										  # sqrt(tri_num) and assume their larger counterparts
	
	if factor_count > factor_goal:
		break
	
	i += 1
	
print "The first triangular number to have over %d factors is %d" % (factor_goal,tri_num)