#include <iostream>
#include <string>


using namespace std;

int main() {

	string data;
	string arr[4];
	for(int i = 0; i < 4; ++i) {
		cout << "Enter data: ";
		getline(cin, data);
		arr[i] = data;
	}
	cout << endl;
	for (int j = 0; j < 4; ++j) {
		cout << arr[j] << endl;
	}

	return 0;
}
