#include <iostream>
using namespace std;

int main(){
	int userNum;
	int divNum;

	cin >> userNum;
	cin >> divNum;

	for (int i=0; i < 3; i++){
		userNum = userNum/divNum;
		if (i!=2){
			cout << userNum << " ";
		} else {
			cout << userNum;
		}
	}
	cout << endl;

	return 0;
}
