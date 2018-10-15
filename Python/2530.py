class Oven:
	def __init__(self, Hour, Min, Sec, Sec2):
		self._hour = Hour
		self._min = Min
		self._sec = Sec
		self._sec2 = Sec2

	def manageHour(self):
		if self._sec2 >= 3600:
			self._hour += self._sec2 // 3600
			if self._hour > 23:
				self._hour %= 24
			self._sec2 -= 3600 * (self._sec2 // 3600)

	def manageMin(self):
		self.manageHour()
		if self._sec2 >= 60:
			self._min += self._sec2 // 60
			if self._min > 59:
				self._min %= 60
				self._hour += 1
			self._sec2 -= 60 * (self._sec2 // 60)

	def manageSec(self):
		self.manageMin()
		self._sec += self._sec2
		if self._sec > 59:
			self._sec %= 60
			self._min += 1
			if self._min > 59:
				self._min %= 60
				self._hour += 1
				if self._hour > 23:
					self._hour %= 24
		print("%d %d %d" % (self._hour, self._min, self._sec))

hour, minute, second = map(int, input().split())
second2 = int(input())
Oven(hour, minute, second, second2).manageSec()

