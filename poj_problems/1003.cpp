#include <iostream>
#include <vector>

using namespace std;

int main(){
	float d;
	vector<float> input;
	vector<int> result;
	
	while(cin >> d){
		if(d==0)
			break;
		input.push_back(d);
	}

	double denom = 2, counter = 0;
	int numCards = 0;
	for(int i = 0; i < input.size(); i++){
		double x = 1/denom;
		while(counter <= input.at(i)){
			numCards++;
			denom++;
			counter += x;
			x = 1/denom;
		}
		result.push_back(numCards);
		numCards = 0;
		denom = 2;
		counter = 0;
	}
	
	for(int i = 0; i < result.size(); i++){
		cout << result.at(i) << " card(s)\n";
	}
	
	return 0;
}