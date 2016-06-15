#include <iostream>
#include <iostream>
#include <math.h>
using namespace std;
int j;
int main() {
	cout << "Enter limit: ";
	cin >> j;
	for (int i = 0; i <= j; i++) {
		cout << "The sqrt of " << i << " is " << sqrt(i) << ". Original # = " << j << "." << endl;
	}
	cout << "All done! :)" << endl;
	cout << "Ok just press anything and then enter to exit thx" << endl;
	system("pause");
	return 0;
}
