#include <iostream>
using namespace std;

int main()
{
	int i1, tmp, sub = 0, r;
	cin >> i1;
	tmp = i1;
	while (tmp >= 10) {
		sub += 9;
		tmp /= 10;
	}
	sub += tmp % 10 - 1;
	for (int i = i1 - sub; i < i1; i++) {
		r = 0;
		tmp = i;
		while (tmp != 0) {
			r += tmp % 10;
			tmp /= 10;
		}
		if (i1 == i + r) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}