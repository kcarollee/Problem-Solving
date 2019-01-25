class Numbers:
	def __init__(self, *args, **kwargs):
		self.arr = [i for i in args]
		self.arr2 = kwargs
		
class NumberProcessor(Numbers):
	def __init__(self, *args, **kwargs):
		super().__init__(*args, **kwargs)
	
	def prnt(self):
		for i in self.arr:
			print(i)
		for k, v in self.arr2.items():
			print("%s : %d" % (k, v))

a = [1, 2, 3, 4, 5]
d = {"a" : 1, "b" : 2}
#passing list as non-kw arguments and dictionary as kw kw arguments
NumberProcessor(*a, **d).prnt()
#list of all the methods within the class
print(dir(NumberProcessor))
