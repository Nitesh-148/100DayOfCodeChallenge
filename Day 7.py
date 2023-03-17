# A left rotation operation on an array of size n shifts each of the array's elements  unit to the left.
# Given an integer,d, rotate the array that many steps left and return the result.

import math
n, d = map(int, input().split())
arr = [int(x) for x in input().split()]

for i in range(d):
    arr.append(arr[i])
    
for x in arr[d:]:
    print(x, end=' ')
