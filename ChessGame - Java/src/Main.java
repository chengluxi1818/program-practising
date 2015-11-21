class Game {
	private Player white;
	private Player black;
	private Board board[][];
	
	public Game() {
		this.white = new Player();
		this.black = new Player();
		this.board = new Board[8][8];
		
		initialize();

	}
	
	public void initialize() {
		// Board[x][y].setPiece
		
		white.isMoving = true;
		black.isMoving = false;
		
		white.isChecked = false;
		black.isChecked = false;
	}
	
	public void play(Board[][] board, int fx, int fy, int tx, int ty) {
		if(isOver())
			return;
		
		if(white.isMoving) {
			white.move(board, fx, fy, tx, ty);
		}
		else {
			black.move(board, fx, fy, tx, ty);
		}
		
		return;
	}
	
	public boolean isOver() {
		if(!white.isMoving && white.isChecked)
			return true;
		if(!black.isMoving && black.isChecked)
			return true;
		
		return false;
	}
	
	public void reset() {
		// Erase board status
		// Then initialize
	}
}

enum Color {
	White, Black
}

class Player {
	public boolean isMoving;
	public boolean isChecked;
	private Color color;
	
	private boolean check() {
		// TODO: check self that is checked mate or not
		return false;
	}
	
	public boolean move(Board b[][], int fx, int fy, int tx, int ty) {
		if(!isMoving)
			return false;
		
		if(isChecked) {
			// TODO: think about it
		}
		
		if(tx < 0 || tx > 7 || ty < 0 || ty > 7)
			return false;
		
		Piece curr = b[fx][fy].getPiece();
		
		if(curr.getColor() != this.color)
			return false;
		
		if(curr.isValidMove(tx, ty)) {
			// If is valid
			// 1. Set the original board be empty and occupy with nothing;
			// 2. Move to the target board, set the board with this Piece and make it not empty
			// 3. If there is a Piece of the opponent, kill the piece and set the block with its own.
		}
		
		return false;
	}
}

class Board {
	private Color color;
	private Piece piece;
	public boolean isEmpty;
	
	public void setPiece(Piece p) {
		this.piece = p;
	}
	
	public Piece getPiece() {
		return this.piece;
	}
}

abstract class Piece {
	private int x;
	private int y;
	private Color color;
	private boolean isLive;
	protected moveStep moveType;
	
	public Piece (int x, int y, Color color) {
		this.x = x;
		this.y = y;
		this.color = color;
		this.isLive = true;
	}
	
	public abstract void setMoveType();
	
	public abstract boolean isValidMove(int tx, int ty);
	
	public Color getColor() {
		return this.color;
	}
	
	public void setXY(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public void kill() {
		this.isLive = false;
	}
	
}

class King extends Piece implements moveSingle {
	public King(int x, int y, Color color) {
		super(x, y, color);
	}

	@Override
	public boolean isValidMove(int tx, int ty) {
		return false;
	}
	
	@Override
	public void setMoveType() {
		moveType = new moveStraight();
	}
}

interface moveStep {
	public void moveto(int x, int y);
}

class moveStraight implements moveStep {
	@Override
	public void moveto(int x, int y) {
		
	}
}

class moveDiagonally implements moveStep {
	@Override
	public void moveto(int x, int y) {
		
	}
}


interface moveSingle {
	
}

interface moveDiagonal {
	
}

public class Main {

}
