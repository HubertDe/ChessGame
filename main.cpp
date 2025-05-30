#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::string;
using std::endl;

class Board {
	private:
		int row;
		int column;
		vector<vector<string>> board {{"%","a","b","c","d","e","f","g","h"},
										{"8","o","x","o","x","o","x","o","x"},
										{"7","x","o","x","o","x","o","x","o"},
										{"6","o","x","o","x","o","x","o","x"},
										{"5","x","o","x","o","x","o","x","o"},
										{"4","o","x","o","x","o","x","o","x"},
										{"3","x","o","x","o","x","o","x","o"},
										{"2","o","x","o","x","o","x","o","x"},
										{"1","x","o","x","o","x","o","x","o"},};							
	public:
		Board() {
			for(row = 0; row < 9; row ++){
					cout<<endl;
				for (column = 0 ;column < 9; column++){
					cout<< board[row][column];
				}
		}
	}
};

class ChessPiece{
	protected:
		string fimage;
		vector<vector<int>> fmove;
	public:
		ChessPiece(string image):fimage(image) {}
};

class King:private ChessPiece{
	public:
		King(string image):ChessPiece(image){
			fmove = {{1,1},{-1,-1},{1,-1},{-1,1}};
		}
};

class BlackKing: private King{
	public:
		BlackKing(string image):King(image){
				image = "/u265A";
			}
		};

class WhiteKing: private King{
	public:
		WhiteKing(string image):King(image){
				image = "/u2654";
			}
};


class Queen:private ChessPiece{
	public:
		Queen(string image):ChessPiece(image){
			fmove={{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},
			{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7,},{8,8},{-1,-1},{-2,-2},{-3,-3},{-4,-4},{-5,-5},{-6,-6},{-7,-7},{-8,-8}};
		}
};

class BlackQueen: private Queen{
	public:
		BlackQueen(string image):Queen(image){
				image = "/u265B";
			}
};

class WhiteQueen: private Queen{
	public:
		WhiteQueen(string image):Queen(image){
				image = "/u2655";
			}
};
class Rook:private ChessPiece{
	public:
		Rook(string image):ChessPiece(image){
			fmove={{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0}};
		}
};


class BlackRook: private Rook{
	public:
		BlackRook(string image):Rook(image){
				image = "/u265C";
			}
};


class WhiteRook: private Rook{
	public:
		WhiteRook(string image):Rook(image){
				image = "/u2656";
			}
};
class Bishop:private ChessPiece{
	public:
		Bishop(string image):ChessPiece(image){
			fmove={{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7,},{8,8},{-1,-1},{-2,-2},{-3,-3},{-4,-4},{-5,-5},{-6,-6},{-7,-7},{-8,-8}};
		}
};

class WhiteBishop: private Bishop{
	public:
		WhiteBishop(string image):Bishop(image){
				image = "/u2657";
			}
};

class BlackBishop: private Bishop{
	public:
		BlackBishop(string image):Bishop(image){
				image = "/u265D";
			}
};
class Knight:private ChessPiece{
	public:
		Knight(string image):ChessPiece(image){
			fmove={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
		}
};

class WhiteKnight: private Knight{
	public:
		WhiteKnight(string image):Knight(image){
				image = "/u2658";
			}
};

class BlackKnight: private Knight{
	public:
		BlackKnight(string image):Knight(image){
				image = "/u265E";
			}
};

class Pawn:private ChessPiece{
	public:
		Pawn(string image):ChessPiece(image){
			fmove={{1,0},{2,0}};
		}
};

class BlackPawn: private Pawn{
	public:
		BlackPawn(string image):Pawn(image){
				image = "/u265F";
			}
};

class WhitePawn: private Pawn{
	public:
		WhitePawn(string image):Pawn(image){
				image = "/u2659";
			}
};

int main() {
    Board board;
	
	cout<<endl<<"\u2654"<<"\u265A";
    return 0;
}
