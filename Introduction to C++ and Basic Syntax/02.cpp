#include <iostream>
using namespace std;

int main()
{
	double n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	double product = n1 * n2 * n3;
	if (product < 0) {
		cout << "-";

	}
	else {
		cout << "+";
	}
}

