#include "../include/std_lib_facilities.h"
int square(int x);
int main() {
	vector<string> week{ "w1","w2" };
	for (string s : week) {
		cout << s << endl;
	}
}
int square(int x) {
	return x * x;
}