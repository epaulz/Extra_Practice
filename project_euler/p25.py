prev=0
fib=1
term=0
fibonacci_nums=[]

while(len(str(fib)) < 1000):
        fibonacci_nums.append(fib)
        term += 1
        temp = fib
        fib += prev
        prev = temp

fibonacci_nums.append(fib)
term += 1

print(term)
