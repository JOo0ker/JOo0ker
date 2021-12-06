#include <iostream>
#include <bitset>

int main()
{
	using namespace std;
	cout << "Enter an interger: ";
	int n;
	cin >> n;

	cout << "n     n*n\n";
	cout << n << "     " << n * n << " (decimal)\n";

	// set to hex mode
	cout << hex;
	cout << n << "     ";
	cout << n * n << " (hexadecimal)\n";

	// set to octcal mode
	cout << oct << n << "     " << n * n << " (octal)\n";

	// set to bin mode
	//cout << bitset << n << "     " << n * n << " (bin)\n";
	
	// alternative way to call a manipulator
	dec(cout);
	cout << n << "     " << n * n << " (decimal)\n";

	return 0;
}