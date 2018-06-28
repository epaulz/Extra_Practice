#functions
def average(numbers):
	total = float(sum(numbers))
	total = total / len(numbers)
	return total
	
def get_average(x, w, k, c):
	i = 0
	avg = 0.0
	while i < c:
		avg += average(x[k[i]]) * w[k[i]]
		i += 1
	return avg
	
def get_letter_grade(score):
	if score >= 90:
		return "A"
	elif score >= 80:
		return "B"
	elif score >= 70:
		return "C"
	elif score >= 60:
		return "D"
	else:
		return "F"

#main		
print "***GRADE CALCULATOR***\n"

grades = {}
grade_weights = {}
grade_keys = []
print "Enter the grade categories\n"

counter = 0
input = ''


while True:
	print "Next category ('c' to continue):"
	input = raw_input()
	if input == 'c' or input == 'C':
		break
	#j = float(raw_input())
	grades[input] = []
	grade_keys.append(input)
	#grade_weights[i] = j
	counter += 1

w = 0.00
j = 0
while j < counter:
	print "\nEnter the weight for '%s':" % (grade_keys[j])
	w = raw_input()
	if w == -1:
		break
	grade_weights[j] = w
	j += 1
	
k = 0
while k < len(grade_keys):
	print "\nEnter the grades for '%s' (-1 to move to next section)" % (grade_keys[k])
	while True:
		j = float(raw_input())
		if j == -1:
			break
		grades[grade_keys[k]].append(j)
	k += 1

grade = get_average(grades, grade_weights, grade_keys, counter)
letter = get_letter_grade(grade)

print "\n%s (%s)" % (letter, grade)
