#include <iostream>
using namespace std;
int t = 0, a = 0, b = 0, result = 0;
void festival1(int num) {
	if (num == 1)
		result += 5000000;
	else if (num <= 3)
		result += 3000000;
	else if (num <= 6)
		result += 2000000;
	else if (num <= 10)
		result += 500000;
	else if (num <= 15)
		result += 300000;
	else if (num <= 21)
		result += 100000;
}
void festival2(int num) {

	if (num == 1)
		result += 5120000;
	else if (num <= 3)
		result += 2560000;
	else if (num <= 7)
		result += 1280000;
	else if (num <= 15)
		result += 640000;
	else if (num <= 31)
		result += 320000;
}
int main() {
	cin >> t;

	while (t--) {
		result = 0;
		cin >> a >> b;
		if (a != 0)
			festival1(a);
		if (b != 0)
			festival2(b);
		cout << result << endl;
	}
	
}
