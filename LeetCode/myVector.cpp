#include <vector>
#include <iostream>


int main(void){
	std:: vector<int> myVector;
	int value;
	for( int i = 0; i < 5; i++){
		std:: cin >> value;
		myVector.push_back(value);
	}

	int size = myVector.size();
	
	for( int i = 0; i < size; i ++ ){
		std:: cout << myVector[i] << " ";
	}

	std:: cout << "\n";
}
