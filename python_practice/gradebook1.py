grades = {"tests":[84.0, 96.0, 83.0],
		  "pas":[80.0, 97.0, 93.0],
		  "wa":[95.0],
		  "labs":[100.0, 90.0, 80.0, 80.0, 100.0, 70.0, 100.0, 100.0, 90.0],
		  "quizzes":[85.0, 90.0, 95.0, 85.0, 85.0, 90.0, 75.0],
		  "final":[83.0]}
		  
def average(numbers):
	total = float(sum(numbers))
	total = total / len(numbers)
	return total
	
def get_average(x):
	tests = average(x["tests"])
	pa = average(x["pas"])
	wa = average(x["wa"])
	lab = average(x["labs"])
	quiz = average(x["quizzes"])
	final = average(x["final"])
	return tests*.30 + pa*.14 + wa*.04 + lab*.14 + quiz*.12 + final*.26
	
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

print "%s (%s)" % (get_letter_grade(get_average(grades)), get_average(grades))
