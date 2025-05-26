#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::string;
using std::endl;

class Board {
	private:
		int frow;
		int fcolumn;
		vector<vector<string>> fboard {{"%","a","b","c","d","e","f","g","h"},
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
			for(frow = 0; frow < 9; frow ++){
					cout<<endl;
				for (fcolumn = 0 ;fcolumn < 9; fcolumn++){
					cout<< fboard[frow][fcolumn];
				}
		}
	}
};



int main() {
    Board board;

    return 0;
}
