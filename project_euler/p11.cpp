#include <iostream>
#include <fstream>

using namespace std;

int max(int x,int y,int z){
	if(x > y && x > z)
		return x;
	else if(y > x && y > z)
		return y;
	else 
		return z;
}

int main(){

	int n = 20;
	int matrix[n][n];
	
	ifstream fp("p11_input.txt");
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			fp >> matrix[i][j];
		}
	}
	
	int prod = 0;
	
	for(int i=0;i<=n-4;i++){
		for(int j=0;j<=n-4;j++){
			int temp1 = matrix[i][j]*matrix[i][j+1]*matrix[i][j+2]*matrix[i][j+3];
			int temp2 = matrix[i][j]*matrix[i+1][j]*matrix[i+2][j]*matrix[i+3][j];
			int temp3 = matrix[i][j]*matrix[i+1][j+1]*matrix[i+2][j+2]*matrix[i+3][j+3];
			if(max(temp1,temp2,temp3) > prod)
				prod = max(temp1,temp2,temp3);
		}
	}
	for(int i=0;i<=n-4;i++){
		for(int j=n-1;j>=0;j--){
			int temp = matrix[i][j]*matrix[i+1][j-1]*matrix[i+2][j-2]*matrix[i+3][j-3];
			if(temp > prod)
				prod = temp;
		}
	}
	
	cout << "The greatest product of four adjacent numbers (up, down, left, right, or diagonal) on this " << n << "x" << n << "grid is " << prod << endl;
	
	return 0;
}
