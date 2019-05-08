import numpy as np

# Arrange 0 to 14 in a 3 * 5 matrix
a = np.arange(15).reshape(3, 5)
print("Arrange 0 t0 14 in a 3 * 5 matrix")
print(a)
# Dimensions of 'a'
dim = a.shape
print("Dimensions of a: ", dim)
# The numbder of dimensions of 'a'
n = a.ndim
print("Number of dimensions in a: ", n)
