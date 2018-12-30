'''
- Sequences
	- Container
		- list
		- tuple
		- collections
	- flat
		- str
		- bytes
		- bytearray
'''
symbols = '&*()*()'
codes = []
for s in symbols:
	codes.append(ord(s))
print(codes)

codes_2 = [ord(s) for s in symbols]
print(codes_2)
