class CircularQueue:
	class _Node:
		def __init__(self, element, next):
			self._element = element
			self._next = next

	def __init__(self):
		self._tail = None
		self._size = 0
		self._temp = []

	def is_empty(self):
		return self._size == 0

	def enqueue(self, e):
		newest = self._Node(e, None)
		if self.is_empty():
			newest._next = newest
		else:
			newest._next = self._tail._next
			self._tail._next = newest
		self._tail = newest
		self._size += 1

	def rotate(self):
		if self._size > 0:
			self._tail = self._tail._next

	def dequeue(self):
		oldhead = self._tail._next
		if self._size == 1:
			self._tail = None
		else:
			self._tail._next = oldhead._next
		self._size -= 1
		self._temp.append(oldhead._element)

if __name__ == "__main__":
	N, M = map(int, input().split())
	circular = CircularQueue()
	for i in range(1, N + 1):
		circular.enqueue(i)
	for j in range(N):
		for k in range(M - 1):
			circular.rotate()
		circular.dequeue()
	print("<", end = '')
	[print("%d" % (circular._temp[l]), end = ', ') for l in range(N - 1)]
	print(circular._temp[N - 1], end = ">")
	
	
				
