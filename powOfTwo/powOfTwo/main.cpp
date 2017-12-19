#include <iostream>
#include <stdlib.h>

using namespace std;

bool powOfTwo(long n){
	// if n = 0 it is not power of two
	if (n == 0)
		return false;

	// if it is 1 by default it is power of two 2^0
	if (n == 1 )
		return true;

	//For other numbers >1 and %2==0 keep deviding it by 2 until the divisor is 1
	while (n > 1 && ((n % 2) == 0)){
		n = n / 2;
	}

	if (n == 1)
		return true;
	else
		return false;
}


int main(){
	long x;

	cout << "Insert the Number :   ";
	cin >> x;
	cout << endl;

	//call check powOfTwo function
	if (powOfTwo(x))
		cout << "Yes the number " << x << " is power of 2" << endl;
	else
		cout << "No the number " << x << " is not power of 2" << endl;

	return 0;
}