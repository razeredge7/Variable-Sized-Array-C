#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num = 0;
    int varLengArrInt;
    vector<int> values;
    vector<int> baris;
    vector<vector<int>> varK;
    vector<vector<int>> queries;
    int varKa;
    int counter = 0;
    int counterk = 0;
    int a = 0;
    int b = 0;
    

    
    //2 input
    for(counter = 0; counter<2; counter++){
        cin >> num;
        values.push_back(num);
    }
    
    //Input how many array here
    for(counter = 0; counter < values[0]; counter++){
        
        cin>>varLengArrInt;
        baris.push_back(varLengArrInt);
        vector<int> temp;
        
        for(counterk = 0;counterk < baris[counter]; counterk++){
            cin>>varKa;
            temp.push_back(varKa);
        }
        varK.push_back(temp);
    }
        
    for(counter = 0; counter < values[1]; counter++){
        cin>>a>>b;
        cout<<varK[a][b]<<"\n";
    }
    return 0;
}
