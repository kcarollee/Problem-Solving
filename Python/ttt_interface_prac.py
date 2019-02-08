class TTT:
	def __init__(self):
		self.posX = None
		self.posY = None
		self.board = [[" "] * 3 for i in range(3)]
		self.player_flag = True
	
	def Show(self):
		print("-------------------")
		print("|  " + str(self.board[0][0]) + "  |  " + \
			str(self.board[0][1]) + "  |  " + str(self.board[0][2]) + "  |")          
		print("-------------------")
		print("|  " + str(self.board[1][0]) + "  |  " + \
			str(self.board[1][1]) + "  |  " + str(self.board[1][2]) + "  |")        
		print("-------------------")
		print("|  " + str(self.board[2][0]) + "  |  " + \
			str(self.board[2][1]) + "  |  " + str(self.board[2][2]) + "  |")   
		print("-------------------")
	
	def Pos(self):
		if self.player_flag:
			print("Player 1's turn!")
			self.posX = int(input("Enter x position:"))
			self.posY = int(input("Enter y position:"))
			self.board[self.posX - 1][self.posY - 1] = "O"
			self.player_flag = False
		else:
			print("Player 2's turn!")
			self.posX = int(input("Enter x position:"))
			self.posY = int(input("Enter y position:"))
			self.board[self.posX - 1][self.posY - 1] = "X"
			self.player_flag = True
	
	def Decide(self):
		pass
	
	def Play(self):
		while True:
			self.Show()
			self.Pos()
			self.Decide()
		
			
t = TTT()
t.Play()



