#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int numComparisons(std::string S){
	char temp;
	int count = 0;
	for(unsigned int i = 0; i < S.length()-1; i++){
		for(unsigned int j = i+1; j < S.length(); j++){
			if(S.at(j) < S.at(i)){
				temp = S.at(j);
				S.at(j) = S.at(i);
				S.at(i) = temp;
				count++;
			}
		}
	}
	return count;
}

int main(){
	int n, m;
	std::cin >> n >> m;
	
	std::string t;
	std::vector<std::string> input;
	
	for(int i = 0; i < m; i++){
		std::cin >> t;
		input.push_back(t);
	}
	
	std::vector<int> comparisons(m);
	for(int i = 0; i < m; i++){
		comparisons.at(i) = numComparisons(input.at(i));
	}
	
	std::string temp;
	for(int i = 0; i < m-1; i++){
		for(int j = i+1; j < m; j++){
			if(comparisons.at(j) < comparisons.at(i)){
				temp = input.at(j);
				input.at(j) = input.at(i);
				input.at(i) = temp;
			}
		}
	}
	
	for(int i = 0; i < m; i++){
		std::cout << input.at(i) << std::endl;
	}
	
	return 0;
}