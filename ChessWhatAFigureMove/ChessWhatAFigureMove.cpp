#include <iostream>

int main(){
	using namespace std;

	cout << "input starter coordinates: \n";
	string starterx, movingy;
	cin >> starterx >> movingy;
	
	
	if ((abs(starterx[0] - movingy[0]) == 1) && (abs(starterx[1] - movingy[1]) == 2) ||
	    (abs(starterx[0] - movingy[0]) == 2) && (abs(starterx[1] - movingy[1]) == 1)) {
	    cout << "this is horse move.\n";
	}
	if ((abs(starterx[0] - movingy[0]) == 0) && (abs(starterx[1] - movingy[1]) > 0) ||
	    (abs(starterx[1] - movingy[1]) > 0) && (abs(starterx[0] - movingy[0]) == 0)) {
	    cout << "this is rook move.\n";
	}
	if ((abs(starterx[0] - movingy[0]) == abs(starterx[1] - movingy[1])) &&
	    (abs(starterx[0] - movingy[0 > 0]))) {
	    cout << "this is elephant move.\n";
	}if ((abs(starterx[0] - movingy[0]) == abs(starterx[1] - movingy[1])) &&
	    (abs(starterx[0] - movingy[0 > 0])) ||
	    (abs((starterx[0] - movingy[0]) == 0) && (abs(starterx[1] - movingy[1]) > 0) ||
	        (abs(starterx[0] - movingy[0]) > 0) && (abs(starterx[1] - movingy[1]) == 0))) {
	    cout << "this is queen move.\n";
	}
	if ((abs(starterx[0] - movingy[0]) <= 1 && abs(starterx[1] - movingy[1]) <= 1)) {
	    cout << "this is king move.\n";
	
	}
}

