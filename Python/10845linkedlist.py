import time
class LinkedQueue:
	class _Node:
		def __init__(self, element, next):
			self._element = element
			self._next = next

	def __init__(self):
		self._head = None
		self._tail = None
		self._size = 0

	def __len__(self):
		return self._size

	def is_empty(self):
		return self._size == 0

	def first(self):
		if self.is_empty():
			return -1
		return self._head._element

	def dequeue(self):
		if self.is_empty():
			return -1
		answer = self._head._element
		self._head = self._head._next
		self._size -= 1
		if self.is_empty():
			self._tail = None
		return answer

	def enqueue(self, e):
		newest = self._Node(e, None)
		if self.is_empty():
			self._head = newest
		else:
			self._tail._next = newest
		self._tail = newest
		self._size += 1
	
	def last(self):
		if self.is_empty():
			return -1
		return self._tail._element

tc = int(input())
start = time.time()
Q = LinkedQueue()
for i in range(tc):
	command = 'push 0'
	if 'push' in command:
		Q.enqueue(int(command.split()[-1]))
		
	elif command == 'front':
		print(Q.first())
		
	elif command == 'empty':
		if Q.is_empty():
			print(1)

		else:
			print(0)

	elif command == 'pop':
			print(Q.first())
			Q.dequeue()
	
	elif command == 'size':
		print(Q.__len__())

	elif command == 'back':
		print(Q.last())
end = time.time()
print(end - start)		

		
		
