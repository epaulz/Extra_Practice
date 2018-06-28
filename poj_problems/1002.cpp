#include <iostream>
#include <string>
#include <vector>
#include <sstream>

template <typename T>
bool inArray(T elem, T arr[], int n){
	for(int i = 0; i < n; i++){
		if(arr[i] == elem)
			return true;
	}
	return false;
}

template <typename T>
std::string to_string (T value){
	// create an output string string
	std::ostringstream os;
	
	// throw the value into the string stream
	os << value;
	
	// convert the string stream into a string and return
	return os.str();
}


int main(){
	char two[6] = {'A','B','C','a','b','c'};
	char three[6] = {'D','E','F','d','e','f'};
	char four[6] = {'G','H','I','g','h','i'};
	char five[6] = {'J','K','L','j','k','l'};
	char six[6] = {'M','N','O','m','n','o'};
	char seven[6] = {'P','R','S','p','r','s'};
	char eight[6] = {'T','U','V','t','u','v'};
	char nine[6] = {'W','X','Y','w','x','y'};
	char alphabet[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
									'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
									'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
									'p','q','r','s','t','u','v','w','x','y','z'};
	
	int listLength;
	std::cin >> listLength;
	
	std::string numbers[listLength];
	
	int i = 0, k;
	unsigned int j;
	while(i < listLength){
		std::cin >> numbers[i];
		i++;
	}
	
	for(i = 0; i < listLength; i++){
		for(j = 0; j < numbers[i].length(); j++){
			if(numbers[i].at(j)=='-')
				numbers[i].erase(numbers[i].begin()+j);
		}
	}

	for(i = 0; i < listLength; i++){
		for(j = 0; j < numbers[i].length(); j++){
			if(inArray(numbers[i].at(j), alphabet, 52)){
				if(inArray(numbers[i].at(j), two, 6))
					numbers[i].at(j) = '2';
				else if(inArray(numbers[i].at(j), three, 6))
					numbers[i].at(j) = '3';
				else if(inArray(numbers[i].at(j), four, 6))
					numbers[i].at(j) = '4';
				else if(inArray(numbers[i].at(j), five, 6))
					numbers[i].at(j) = '5';
				else if(inArray(numbers[i].at(j), six, 6))
					numbers[i].at(j) = '6';
				else if(inArray(numbers[i].at(j), seven, 6))
					numbers[i].at(j) = '7';
				else if(inArray(numbers[i].at(j), eight, 6))
					numbers[i].at(j) = '8';
				else if(inArray(numbers[i].at(j), nine, 6))
					numbers[i].at(j) = '9';
			}
		}
	}
	
	std::vector<std::string> output;
	int outputIndex = 0;
	
	int ignore[20], ignore_size = 0, count = 1;
	for(i = 0; i < listLength-1; i++){
		if(!inArray(i, ignore, ignore_size)){
			for(k = i+1; k < listLength; k++){
				if(numbers[i].compare(numbers[k]) == 0){
					count++;
					ignore[ignore_size] = k;
					ignore_size++;
				}
			}
			if(count > 1){
				output.push_back("");
				output.at(outputIndex).append(numbers[i].substr(0,3));
				output.at(outputIndex).append("-");
				output.at(outputIndex).append(numbers[i].substr(3,6));
				output.at(outputIndex).append(" ");
				output.at(outputIndex).append(to_string(count));
				output.at(outputIndex).append("\n");
				outputIndex++;
			}
		}
		count = 1;
	}
	
	std::string temp;
	for(unsigned int x = 0; x < output.size()-1; x++){
		for(unsigned int y = x+1; y < output.size(); y++){
			if(output.at(y).at(0) < output.at(x).at(0)){
				temp = output.at(y);
				output.at(y) = output.at(x);
				output.at(x) = temp;
			}
		}
	}
	
	for(unsigned int p = 0; p < output.size(); p++){
		std::cout << output.at(p);
	}
	

	return 0;
}