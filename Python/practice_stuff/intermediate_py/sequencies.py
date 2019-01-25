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

codes_2 = [ord(s) for s in symbols] #More explicit!
print(codes_2)

string = 'aqewirotu'
consonants = [ord(s) for s in string if s != 'a' and s != 'e' and s != 'i'
				and s != 'o' and s != 'u'] #line breaks are allowed within brackets
print(consonants)

lows = ['a', 'b', 'c']
caps = ['A', 'B', 'C', 'D']
c = [(low, cap) for low in lows for cap in caps]
print(c)

#generator expressions
import array
str2 = '12d21d2'
print(tuple(ord(char) for char in str2))
print(array.array('I', (ord(char) for char in str2))) #first argument defines the storage type

#tuples as records

x_axis, y_axis, z_axis = (1, 2, 3) #tuple unpacking
countries = ['Korea', 'Japan', 'China']
landing_dates = ['0304', '0204', '1214']
travel_info = [(cont, date) for cont in countries for date in landing_dates] #tuple unpacking
for destination in sorted(travel_info):
	print('%s / %s' % destination)
	
for country, _ in travel_info: # _ is used to retrieve items of a tuple separately
	print(country)

# a, b = b, a is also a form of tuple unpacking

#Another T.U.
t = (20, 8)
print(divmod(*t))






