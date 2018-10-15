import sys
class Hive:
    def __init__(self, arr):
        self._arr = arr
        self._index = ['Re','Pt','Cc','Ea','Tb','Cm','Ex']
        self._number = [0] * 7
        self._ratio = [] 
        self._len = len(self._arr)

    def number(self):
        for i in range(7):
            for j in range(self._len):
                if self._index[i] == self._arr[j]:
                    self._number[i] += 1

    def rate(self):
        self.number()
        for x in range(7):
            self._ratio.append(self._number[x] / self._len)

    def prnt(self):
        self.rate()
        for k in range(7):
            print("%s %d %.2f" % (self._index[k], self._number[k], self._ratio[k]))
        print("Total", str(self._len), "1.00")

arr = []
tmp = sys.stdin.readlines()
for x in tmp:
    arr += x.split()
print(arr)
Colony = Hive(arr)
Colony.prnt()
