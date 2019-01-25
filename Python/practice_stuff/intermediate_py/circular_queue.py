class Empty(Exception):
	pass

class CircularQ:
	class _Node:
		__slots__ = '_elem', '_next'
		def __init__(self, elem, next):
			self._elem = elem
			self._next = next
			