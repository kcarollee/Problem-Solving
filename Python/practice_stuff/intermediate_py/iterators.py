class Test:
    def __init__(self, first, increment):
        self.current = first
        self.inc = increment
    
    def advance(self):
        self.current += self.inc
    
    def __next__(self):
        if self.current == None:
            raise StopIteration()
        else:
            answer = self.current
            self.advance()
            return answer
    
    def __iter__(self):
        return self


if __name__ == '__main__':
    t = Test(2, 2)
    print(next(t))
    print(next(t))
    print(iter(t))
    i = iter(t)
    print(next(i))
