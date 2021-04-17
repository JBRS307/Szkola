#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream fp;
    fp.open("dane_gen.txt");
    if(!fp.good()){
        return 0;
    }
    string arr[1000];
    for(int i = 0; i<1000; i++){
        fp >> arr[i];
    }
    fp.close();
    int lengths[501] = {0};
    for(int i = 0; i<1000; i++){
        lengths[arr[i].length()]++;
    }
    int species = 0;
    for(int i = 0; i<501; i++){
        if(lengths[i] > 0){
            species++;
        }
    }
    cout << species << '\n';
    cout << *max_element(lengths, lengths+500) << '\n';

    return 0;
}

//by Jakub Rekas