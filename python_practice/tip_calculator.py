def apply_tax(bill, tax):
	bill_w_tax = bill * (1+tax)
	return bill_w_tax
	
def apply_tip(bill, tip):
	bill_w_tip = bill * (1+tip)
	return bill_w_tip
	
meal_cost = float(raw_input("Meal price: "))
sales_tax = float(raw_input("Sales tax (8% = .08): "))
tip_amt = float(raw_input("Tip (15% = .15): "))

meal_w_tax = apply_tax(meal_cost, sales_tax)
meal_w_tip = apply_tip(meal_w_tax, tip_amt)

print "\nInitial: %.2f" % (meal_cost)
print "Tax: %.2f" % (meal_w_tax - meal_cost)
print "Tip: %.2f" % (meal_w_tip - meal_w_tax)
print "TOTAL: %.2f" % (meal_w_tip)