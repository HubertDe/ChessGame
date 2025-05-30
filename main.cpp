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
class Queen:private ChessPiece{
	public:
		Queen(string image):ChessPiece(image){
			fmove={{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},
			{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7,},{8,8},{-1,-1},{-2,-2},{-3,-3},{-4,-4},{-5,-5},{-6,-6},{-7,-7},{-8,-8}};
		}
};
class Rook:private ChessPiece{
	public:
		Rook(string image):ChessPiece(image){
			fmove={{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0}};
		}
};
class Bishop:private ChessPiece{
	public:
		Bishop(string image):ChessPiece(image){
			fmove={{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7,},{8,8},{-1,-1},{-2,-2},{-3,-3},{-4,-4},{-5,-5},{-6,-6},{-7,-7},{-8,-8}};
		}
};
class Knight:private ChessPiece{
	public:
		Knight(string image):ChessPiece(image){
			fmove={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
		}
};
class Pawn:private ChessPiece{
	public:
		Pawn(string image):ChessPiece(image){
			fmove={{1,0},{2,0}};
		}
};
int main() {
    Board board;
	
	cout<<endl<<"\u2654"<<"\u265A";
    return 0;
}
