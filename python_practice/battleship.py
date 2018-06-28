from random import randint

#functions
def print_board(board):
	for row in board:
		print " ".join(row)
		
def random_row(brd):
	return randint(0, len(brd) - 1)
	
def random_col(brd):
	return randint(0, len(brd[0]) - 1)

#main
board = []
size = 5

for x in range(size):
	board.append(["O"] * size)
		
print_board(board)
	
ship_row = random_row(board)
ship_col = random_col(board)
#print ship_row
#print ship_col

turn = 1
while turn < size:
	print "\nTurn %s" % (turn)
	
	guess_row = int(raw_input("Guess Row: "))
	guess_col = int(raw_input("Guess Column: "))
	
	if guess_row == ship_row and guess_col == ship_col:
		print "\nYou sank my battleship!"
		break
	else:
		if guess_row not in range(5) or guess_col not in range(5):
			print "\nThat's not even in the ocean"
		elif board[guess_row][guess_col] == "X":
			print "\nYou already guessed that"
		else:
			print "\nYou missed!"
			board[guess_row][guess_col] = "X"
			turn += 1
		print_board(board)

print "Game Over"