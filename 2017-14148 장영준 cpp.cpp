#include <iostream>
#include <vector>

using namespace std;

void main() {
	vector<int> numVec;
	int num;
	while (cin >> num){
		numVec.push_back(num);
	}
	for (auto i : numVec) {
		for (auto it = numVec.begin(); it < numVec.end()-1; it++) {
			if (*it < *(it + 1)) {
				int tmp = *it;
				*it = *(it + 1);
				*(it + 1) = tmp;
			}
	    }
		
	}
	cout << "ordered array" << endl;
	for (auto i : numVec) {
		cout << i << " ";
	}
	cout << endl;

}