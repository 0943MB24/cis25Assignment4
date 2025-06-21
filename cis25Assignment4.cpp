#include <iostream>
using namespace std;
// Create a program that shows a menu
// Shows the menu, but loops too many times.
void showMenu() {
	int option;
	cout << "1. Add\n\n2. View\n\n3. Exit\n\n";
}

int main() {
	int option;
	showMenu();
	do {
		cin >> option;
		switch (option == 1) {
		case 1:
			cout << "\nAdding...\n\n";
			break;
		}
		switch (option == 2) {
		case 1:
			cout << "\nViewing...\n\n";
			break;
		}
		if (option > 3) {
			cout << "\nInvalid Input\n\n";
		}
	} while (option != 3);
	cout << "\nExiting program...\n";
	return 0;
}