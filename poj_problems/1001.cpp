#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>

int main(){
	std::string s;
	int t;
	
	std::vector<std::string> R;
	std::vector<int> n;
	std::vector<std::string> results;
	
	while(std::cin >> s >> t){
		R.push_back(s);
		n.push_back(t);
	}
/*
	for(int i = 0; i < R.size(); i++){
		results.push_back(1);
		for(int j = 0; j < n.at(i); j++){
			results.at(i) *= R.at(i);
		}
	}
*/
	
	//testing
	for(int i = 0; i < R.size(); i++){
		std::cout << R.at(i) << "  " << n.at(i) << std::endl;
	}


	for(int i = 0; i < R.size(); i++){
		results.push_back(pow(std::stod(R.at(i)), n.at(i)));
	}
	
	std::cout << std::fixed << std::setprecision(80);
	for(int i = 0; i < results.size(); i++){
		std::cout << results.at(i) << std::endl;
	}

	return 0;
}