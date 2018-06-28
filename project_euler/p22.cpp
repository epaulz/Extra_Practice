#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ifstream f("p22_input.txt");
    
    vector<string> names;

    string line;
    if(f.is_open()){
        for(line; getline(f,line);){
            names.push_back(line);
        }
    }
    f.close();

    for(int i = 0; i < names.size(); i++){
        cout << names[i];
    }

    

    return 0;
}
