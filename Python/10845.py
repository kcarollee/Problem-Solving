class ArrayQueue:
	def __init__(self, tc):
		self._data = [None] * tc
		self._size = 0
		self._front = 0

	def __len__(self):
		return self._size

	def is_empty(self):
		return self._size == 0

	def first(self):
		if self.is_empty():
			return -1
		return self._data[self._front]
	
	def last(self):
		if self.is_empty():
			return -1
		return self._data[self._front + self._size - 1]

	def dequeue(self):
		if self.is_empty():
			return -1
		answer = self._data[self._front]
		self._data[self._front] = None
		self._front = (self._front + 1) % len(self._data)
		self._size -= 1
		return answer

	def enqueue(self, e):
		if self._size == len(self._data):
			self._resize(2 * len(self._data))
		avail = (self._front + self._size) % len(self._data)
		self._data[avail] = e
		self._size += 1
	
	def printQueue(self):
		print(self._data) 

tc = int(input())
Q = ArrayQueue(tc)
for i in range(tc):
	command = input()
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
	elif command == 'print':
		Q.printQueue()

