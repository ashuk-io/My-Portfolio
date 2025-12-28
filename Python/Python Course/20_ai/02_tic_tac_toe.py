def print_board(b):
    print("\n" + "\n---+---+---\n".join([" " + " | ".join(b[i:i+3]) for i in range(0, 9, 3)]) + "\n")

def check_win(b, p):
    wins = [(0,1,2),(3,4,5),(6,7,8),(0,3,6),(1,4,7),(2,5,8),(0,4,8),(2,4,6)]
    return any(all(b[i] == p for i in w) for w in wins)

board = [' '] * 9
player = 'X'

print("Tic-Tac-Toe - Enter position (1-9)")
print("\nPositions:\n\n 1 | 2 | 3\n---+---+---\n 4 | 5 | 6\n---+---+---\n 7 | 8 | 9\n")

for turn in range(9):
    print_board(board)
    while True:
        move = input(f"Player {player}: ")
        if move.isdigit() and 1 <= int(move) <= 9 and board[int(move)-1] == ' ':
            board[int(move)-1] = player
            break
        print("Invalid move!")
    
    if check_win(board, player):
        print_board(board)
        print(f"Player {player} wins!")
        break
    
    player = 'O' if player == 'X' else 'X'
else:
    print_board(board)
    print("It's a tie!")
