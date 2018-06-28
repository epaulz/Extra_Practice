#include <iostream>
#include <string>

using namespace std;

void rotateArray(char *A, int n){
	char temp = A[0];
	
	for(int i = 0; i < n-1; i++)
		A[i] = A[i+1];
	
	A[n-1] = temp;
}


string encode(string msg, string key, char matrix[26][26]){
	string newMsg;
	
	for(unsigned int i = 0; i < msg.length(); i++)
		newMsg.push_back(matrix[(int)msg.at(i)-97][(int)key.at(i)-97]);

	return newMsg;
}

string decode(string msg, string key, char matrix[26][26]){
	string newMsg;
	
	for(unsigned int i = 0; i < msg.length(); i++)
		newMsg.push_back(matrix[(int)key.at(i)-97][(int)msg.at(i)-97]);

	return newMsg;
}

	
int main(){
	int encode_decode = -2;
	string message, keyword, key;
	char alphabet_matrix[26][26];
	char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k',
						 'l','m','n','o','p','q','r','s','t','u','v',
						 'w','x','y','z'};


	cout << "ALPHABET CIPHER\n\n";
	cout << "Would you like to encode or decode a message? (0=encode, 1=decode, -1=quit): ";
	cin >> encode_decode;
	
	for(int i = 0; i < 26; i++){
		for(int j = 0; j < 26; j++)
			alphabet_matrix[i][j] = alphabet[j];

		rotateArray(alphabet,26);
	}
	cout << endl;
	for(int i = 0; i < 26; i++){
		for(int j = 0; j < 26; j++)
			cout << alphabet_matrix[i][j];

		cout << endl;
	}
	
	if(encode_decode==0){
	
		cout << "\nEnter the message to be encoded (lowercase, no spaces): ";
		cin >> message;
		cout << "Enter the keyword: ";
		cin >> keyword;
		
		cout << message << endl << keyword << endl;
		
		unsigned int i = 0;
		while(i < message.length()){
			unsigned int j = 0;
			while(j < keyword.length() && i < message.length()){
				key.push_back(keyword.at(j));
				i++;
				j++;
			}
		}
		
		cout << message << endl << key << endl;

		cout << "\nEncoded message: " << encode(message,key,alphabet_matrix) << endl;
	}	
	else if(encode_decode==1){

		cout << "\nEnter the message to be decoded (lowercase, no spaces): ";
		cin >> message;
		cout << "Enter the keyword: ";
		cin >> keyword;

		cout << message << endl << keyword << endl;
		
		unsigned int i = 0;
		while(i < message.length()){
			unsigned int j = 0;
			while(j < keyword.length() && i < message.length()){
				key.push_back(keyword.at(j));
				i++;
				j++;
			}
		}
		
		cout << message << endl << key << endl;
	
		// decode message and print it out here
		cout << "\nDecoded message: " << decode(message,key,alphabet_matrix) << endl;
	}
	else
		cout << "\nClosing...\n";	


	return 0;
}