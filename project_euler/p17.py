ones = ['one','two','three','four','five','six','seven','eight','nine']
teens = ['ten','eleven','twelve','thirteen','fourteen','fifteen','sixteen','seventeen','eighteen','nineteen']
tens = ['twenty','thirty','forty','fifty','sixty','seventy','eighty','ninety']

n = 1000
nums = []
letters = 0

for i in range(1,n+1):
	if len(str(i))==1:
		nums.append(ones[i-1])
	elif len(str(i))==2:
		if int(str(i)[0])==1:
			nums.append(teens[int(str(i)[1])])
		else:
			nums.append(tens[int(str(i)[0])-2])
			if(int(str(i)[1])>0):
				nums[len(nums)-1] += ones[int(str(i)[1])-1]
	elif len(str(i))==3:
		nums.append(ones[int(str(i)[0])-1])
		nums[len(nums)-1] += "hundred"
		temp = i%100
		if(temp>0):
			nums[len(nums)-1] += "and"
			if temp < 10:
				nums[len(nums)-1] += ones[temp-1]
			else:
				if int(str(temp)[0])==1:
					nums[len(nums)-1] += teens[int(str(temp)[1])]
				else:
					nums[len(nums)-1] += tens[int(str(temp)[0])-2]
					if(int(str(temp)[1])>0):
						nums[len(nums)-1] += ones[int(str(temp)[1])-1]
	else:
		nums.append(ones[int(str(i)[0])-1])
		nums[len(nums)-1] += "thousand"
		# can be expanded past 1000 if desired
		
for i in range(0,len(nums)):
	letters += len(nums[i])
	
print "If all numbers from 1 to %d are written out in words, the total number of letters used is %d" % (n,letters)
