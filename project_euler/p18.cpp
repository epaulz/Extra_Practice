#include <iostream>
#include <fstream>

using namespace std;

#define N 4

int max(int a, int b){
	return a > b ? a : b;
}

int maxPathSum(int arr[][N], int m, int n){
	for(int i=m-1;i>=0;i--){
		for(int j=0;j<=i;j++){
			if(arr[i+1][j] > arr[i+1][j+1])
				arr[i][j] += max(arr[i+1][j],arr[i+1][j+1]);
		}
	}
	return arr[0][0];
}

int main(){
	ifstream fp("p18_input.txt");
	
	int triangle[N][N];
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			triangle[i][j] = 0;
		}
	}
	
	int line_size = 1;
	for(int i=0;i<N;i++){
		for(int j=0;j<line_size;j++){
			fp >> triangle[i][j];
		}
		line_size++;
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << triangle[i][j] << " ";
		}
		cout << endl;
	}
	
	int sum = maxPathSum(triangle,N-1,N-1);
	cout << sum << endl;
	
	return 0;
}