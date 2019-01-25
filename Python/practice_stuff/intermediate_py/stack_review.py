#An exception class dealing with empty sequencies
class Empty(Exception):
	pass

class ArrayStack:
	def __init__(self):
		self._data = []
	
	def __len__(self):
		return len(self._data)
		
	def is_empty(self):
		return len(self._data) == 0
	
	def push(self, e):
		self._data.append(e)

	def pop(self):
		if self.is_empty():
			raise Empty('Empty Stack')
		return self._data.pop()
	
	def top(self):
		if self.is_empty():
			raise Empty('Empty Stack')
		return self._data[-1]

class LinkedStack:
	class _Node:
		__slots__ = '_elem', '_next'
		def __init__(self, elem, next):
			self._elem = elem
			self._next = next
	
	def __init__(self):
		self._head = None
		self._size = 0
	
	def __len__(self):
		return self._size
	
	def is_empty(self):
		return self._size == 0
	
	def push(self, e):
		self._head = self._Node(e, self._head)
		self._size += 1
		
	def top(self):
		if self.is_empty():
			raise Empty('Empty Stack')
		return self._head._elem
	
	def pop(self):
		ans = self._head._elem
		self._head = self._head._next
		self._size -= 1
		return ans
		
def main_1():
	stack_1 = ArrayStack()
	stack_1.push(1)
	stack_1.push(2)
	print(stack_1.pop())
	print(stack_1.pop())

def main_2():
	stack_2 = LinkedStack()
	stack_2.push(3)
	stack_2.push(4)
	print(stack_2.top())
	print(stack_2.pop())
	print(stack_2.pop())
	
main_1()
main_2()
