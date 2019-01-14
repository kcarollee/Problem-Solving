class Empty(Exception):
	pass

class LinkedQ:
	class _Node:
		__slots__ = '_elem', '_next'
		def __init__(self, elem, next):
			self._elem = elem
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
			raise Empty("Queue is empty.")
		return self._head._elem

	def enqueue(self, e):
		newest = self._Node(e, None)
		if self.is_empty():
			self._head = newest
		else:
			self._tail._next = newest
		self._tail = newest
		self._size += 1

	def dequeue(self):
		if self.is_empty():
			raise Empty("Queue is empty.")
		ans = self._head._elem
		self._head = self._head._next
		self._size -= 1
		if self.is_empty():
			self._tail = None
		return ans


if __name__ == "__main__":
	q = LinkedQ()
	while True:
		inpt = input().split()
		if inpt[0] == "ENQ":
			q.enqueue(int(inpt[-1]))
			print("Enqueued %d" % (int(inpt[-1])))
			print("Size of queue: %d" % (q._size))
		elif inpt[0] == "DEQ":
			print("Dequeued %d" % (q.dequeue()))
		elif inpt[0] == "END":
			break
		elif inpt[0] == "FIRST":
			print("Head of the queue: %d" % (q.first()))



