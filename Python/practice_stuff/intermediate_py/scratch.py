class Base:
	def __init__(self, start = 0):
		self._current = start
	
	def _advance(self):
		self._current += 1
	
	def __next__(self):
		if self._current == None:
			raise StopIteration()
		else:
			answer = self._current
			self._advance()
			return answer
	
	def __iter__(self):
		return self

	def print_progression(self, n):
		print(' '.join(str(next(self)) for j in range(n)))
class Second(Base):
	def __init__(self, increment = 1, start = 0):
		super().__init__(start)
		self._increment = increment
	
	def _advance(self):
		self._current += self._increment

p = Second(4, 2)
p.print_progression(20)


