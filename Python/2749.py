def fib(n):
	if n <= 1:
		return(n, 0)
	else:
		(a, b) = fib(n-1)
		return (a+b, a)
print(fib(5))