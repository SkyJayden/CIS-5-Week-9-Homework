#include <iostream>
#include <string>

// Homework 9 — Jayden MB
// CIS 5 Week 09 · Menu on the lab

using std::cout;
using std::endl;
using std::string;

void printMenu() {
	cout << "1) Average  2) High  3) Quit\n";
}

double average(const int a[], int n) {	
	int sum = 0;
	for (int i = 0; i < n; ++i) sum += a[i];
	return sum * 1.0 / n;
}

void printSummary(double avg) {

}

int high(const int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int main() {
	const int N = 4;
	int scores[N] = { 80, 90, 70, 100 };
	int choice = 0;
	double avg = average(scores, N);
	printSummary(avg);

	do {
		printMenu();
		std::cin >> choice;
		if (choice == 1) {
			avg = average(scores, N);
			printSummary(avg);
			cout << "Average: " << avg << "\n";
		}
		else if (choice == 2) {
			int top = high(scores, N);
			cout << "High: " << top << "\n";
		}
	} while (choice != 3);

	return 0;
}

