#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> a1 = {10, 3, 4, 6, 9, 7, 1};
	cout << "Size of the list: " << a1.size() << endl;
	cout << "Elements of the list" << endl;
	for(int i: a1){
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
