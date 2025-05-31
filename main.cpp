#include <iostream>
#include <vector>
#include <map>

using std::cout;
using std::vector;
using std::string;
using std::endl;
using std::map;

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
		map<string, vector<int>> positions = {
			{"a8",{1,1}},{"b8",{1,2}},{"c8",{1,3}},{"d8",{1,4}},{"e8",{1,5}},{"f8",{1,6}},{"g8",{1,7}},{"h8",{1,8}},
			{"a7",{2,1}},{"b7",{2,2}},{"c7",{2,3}},{"d7",{2,4}},{"e7",{2,5}},{"f7",{2,6}},{"g7",{2,7}},{"h7",{2,8}},
			{"a6",{3,1}},{"b6",{3,2}},{"c6",{3,3}},{"d6",{3,4}},{"e6",{3,5}},{"f6",{3,6}},{"g6",{3,7}},{"h6",{3,8}},
			{"a5",{4,1}},{"b5",{4,2}},{"c5",{4,3}},{"d5",{4,4}},{"e5",{4,5}},{"f5",{4,6}},{"g5",{4,7}},{"h5",{4,8}},
			{"a4",{5,1}},{"b4",{5,2}},{"c4",{5,3}},{"d4",{5,4}},{"e4",{5,5}},{"f4",{5,6}},{"g4",{5,7}},{"h4",{5,8}},
			{"a3",{6,1}},{"b3",{6,2}},{"c3",{6,3}},{"d3",{6,4}},{"e3",{6,5}},{"f3",{6,6}},{"g3",{6,7}},{"h3",{6,8}},
			{"a2",{7,1}},{"b2",{7,2}},{"c2",{7,3}},{"d2",{7,4}},{"e2",{7,5}},{"f2",{7,6}},{"g2",{7,7}},{"h2",{7,8}},
			{"a1",{8,1}},{"b1",{8,2}},{"c1",{8,3}},{"d1",{8,4}},{"e1",{8,5}},{"f1",{8,6}},{"g1",{8,7}},{"h1",{8,8}},
		};
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

/*class Game{
	private:
		int turn;
		Board Board;
		WhiteKing WhiteKing;
		BlackKing BlackKing
		WhiteQueen WhiteQueen;
		BlackQueen BlackQueen;
		WhiteRook WhiteRook;
		BlackRook BlackRook;
		WhiteBishop WhiteBishop;
		BlackBishop BlackBishop;
		WhiteKnight WhiteKnight;
		BlackKnight BlackKnight;
		WhitePawn WhitePawn;
		BlackPawn BlackPawn;

	public:
};*/

int main() {
    Board board;
	
	cout<<endl<<"\u2654"<<"\u265A";
    return 0;
}
