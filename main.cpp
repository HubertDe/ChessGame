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
		vector<vector<string>> board {{"%","a","b","c","d","e","f","g","h"},
										{"8","o","x","o","x","o","x","o","x"},
										{"7","x","o","x","o","x","o","x","o"},
										{"6","o","x","o","x","o","x","o","x"},
										{"5","x","o","x","o","x","o","x","o"},
										{"4","o","x","o","x","o","x","o","x"},
										{"3","x","o","x","o","x","o","x","o"},
										{"2","o","x","o","x","o","x","o","x"},
										{"1","x","o","x","o","x","o","x","o"},};						
		Board() {
			for(row = 0; row < 9; row ++){
					cout<<endl;
				for (column = 0 ;column < 9; column++){
					cout<< board[row][column];
				}
		}
	}
		vector<int> getPosition(string position){
			return positions[position];
		}
		vector<vector<string>> getBoard(){
			return board;
		}
};

class ChessPiece{
	protected:
		string fimage;
		vector<vector<int>> fmove;
	public:
		ChessPiece(string image):fimage(image) {}
		string getImage(){
			return fimage;
		}
};

class King:public ChessPiece{
	public:
		King(string image):ChessPiece(image){
			fmove = {{1,1},{-1,-1},{1,-1},{-1,1}};
		}
};

class BlackKing: public King{
	public:
		BlackKing(string image = "/u265A"):King(image){
			}
		};

class WhiteKing: public King{
	public:
		WhiteKing(string	image = "/u2654"):King(image){
			}
};


class Queen:public ChessPiece{
	public:
		Queen(string image):ChessPiece(image){
			fmove={{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},
			{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7,},{8,8},{-1,-1},{-2,-2},{-3,-3},{-4,-4},{-5,-5},{-6,-6},{-7,-7},{-8,-8}};
		}
};

class BlackQueen: public Queen{
	public:
		BlackQueen(string	image = "/u265B" ):Queen(image){
			}
};

class WhiteQueen: public Queen{
	public:
		WhiteQueen(string	image = "/u2655"):Queen(image){
			}
};
class Rook:public ChessPiece{
	public:
		Rook(string image):ChessPiece(image){
			fmove={{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0}};
		}
};


class BlackRook: public Rook{
	public:
		BlackRook(string image = "/u265C"):Rook(image){
			}
};


class WhiteRook: public Rook{
	public:
		WhiteRook(string 	image = "/u2656"):Rook(image){
			}
};

class Bishop:public ChessPiece{
	public:
		Bishop(string image):ChessPiece(image){
			fmove={{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7,},{8,8},{-1,-1},{-2,-2},{-3,-3},{-4,-4},{-5,-5},{-6,-6},{-7,-7},{-8,-8}};
		}
};

class WhiteBishop: public Bishop{
	public:
		WhiteBishop(string 	image = "/u2657"):Bishop(image){
			}
};

class BlackBishop: public Bishop{
	public:
		BlackBishop(string 	image = "/u265D"):Bishop(image){
			}
};
class Knight:public ChessPiece{
	public:
		Knight(string image):ChessPiece(image){
			fmove={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
		}
};

class WhiteKnight: public Knight{
	public:
		WhiteKnight(string 	image = "/u2658"):Knight(image){
			}
};

class BlackKnight: public Knight{
	public:
		BlackKnight(string 	image = "/u265E"):Knight(image){
			}
};

class Pawn:public ChessPiece{
	public:
		Pawn(string image):ChessPiece(image){
			fmove={{1,0},{2,0}};
		}
};

class BlackPawn: public Pawn{
	public:
		BlackPawn(string 	image = "/u265F"):Pawn(image){
			}
};

class WhitePawn: public Pawn{
	public:
		WhitePawn(string image = "/u2659"):Pawn(image){
			}
};

class Game{
	private:
		int turn = 1;
		Board board;
		WhiteKing whiteKing;
		BlackKing blackKing;
		WhiteQueen whiteQueen;
		BlackQueen blackQueen;
		WhiteRook whiteRook;
		BlackRook blackRook;
		WhiteBishop whiteBishop;
		BlackBishop blackBishop;
		WhiteKnight whiteKnight;
		BlackKnight blackKnight;
		WhitePawn whitePawn;
		BlackPawn blackPawn;

	public:
		Game(){
			vector<vector<string>> chessBoard = board.getBoard();
			chessBoard[board.getPosition("a8")[0]][board.getPosition("a8")[1]] = blackRook.getImage();
		}

};

int main() {
	Game game;	
    return 0;
}
