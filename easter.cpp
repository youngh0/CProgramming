//부활절 계산

#include <iostream>
using namespace std;

int main() {
	int numTest;
	cin >> numTest;

	for (int cycle = 0; cycle < numTest; cycle++) {
		int y, c, n, t, i, j, k, l, p, q, m, d;

		cin >> y;
		c = y / 100;
		n = y - (y / 19 * 19);
		t = (c - 17) / 25;
		i = c - ((c / 4) + ((c - t) / 3)) +
			(n * 19 + 15);
		j = i-(i / 30 * 30);
		k = j - ((j / 28) * (1 - (j / 28)) * (29 / (j + 1)) * ((21 - n) / 11));
		l = (y + (y / 4)) + (j + 2) - c + (c / 4);
		p = l - (l / 7 * 7);
		q = k - p;
		m = ((q + 40) / 44) + 3;
		d = (q + 28) - (m / 4 * 31);

		cout << m << " " << d << endl;
	}
}