#include <iostream>

float avg(float arr[], int n){
	float sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	return sum / n;
}

int main(){
	float data[12];
	
	for(int i = 0; i < 12; i++){
		std::cin >> data[i];
	}
	
	float averageBalance = avg(data, 12);
	std::cout << "$" << averageBalance << std::endl;
	
	return 0;
}