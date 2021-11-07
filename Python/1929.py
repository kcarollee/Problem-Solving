#Print all primes larger than or equal to M and lesser than or equal to N
import math
m, n = input().split()
m = int(m)
n = int(n)
num_arr = []
is_prime = []

for i in range(m, n + 1):
    num_arr.append(i)
    is_prime.append(True)
    
arr_len = len(num_arr)

s = int(math.sqrt(n))

"""
for i in range(0, arr_len):
    if is_prime[i] == True:
        for j in range(2, s + 1):     
            if num_arr[i] % j == 0 and num_arr[i] / j != 1:
                is_prime[i] = False
"""

for i in range(2, s + 1):
    for j in range(0, arr_len):
        if not is_prime[j]:
            continue
        if num_arr[j] % i == 0 and num_arr[j] / i != 1:
            is_prime[j] = False



for i in range(0, arr_len):
    if num_arr[i] == 1: 
        continue
    if is_prime[i]:
        print(num_arr[i])




