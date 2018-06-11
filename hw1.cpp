#include <iostream>
#include <string>

using namespace std; //haha STD

int main() {
	int baka = 0;

	// Uh-oh, fix me so it prints 0!
	cout << baka << endl;

	// Make me one line!
	int nani, boi = 3;

	// Make me one line!
	cin >> nani >> boi;

	// Make aiyah print out "3"!
	int aiyah = 3;
	cout << aiyah << endl;

	// Aiyah, it doesn't print 301! Fix quick pls
	int c = 300;
	cout << ++c << endl;

	// Make me always true no matter what!
	if(boi == 3 || c == 300) {
		cout << "haha nice" << endl;
	}

	// Make me more efficient and easier to read with a switch! You can also make it one line with ternary operators!
	int a;
	cin >> a;
	switch(a) {
	
	case 1:
		cout << "NANI" << endl;
		break;
	case 2:
		cout << "sword art online" << endl;
		break;
	case 3:
		cout << "boop" << endl;
		break;
	case 5:
		cout << "BAKA" << endl;
		break;
	cout << ((a % 2 == 0) ? "tsundere queen" : "so like yah") << endl;
	
	// What is wrong with this code? Fix it so it prints all odd numbers between 1 and 100!
	// Also this way is super inefficient, fix that too
	for (int i = 0; i <= 100; i++) {
		if(i % 2 == 1)
			cout << i << endl;
	}

	// How do I let both lines show 11?
	a = 1;
	while (a < 10) {
		a = a + 2;
	}
	cout << a << endl;

	while (a < 10) {
		a = a + 2;
	} 
	cout << a << endl;
}
	// This should return 0 if it wasn't trash. Fix it.
	return 0;
}
