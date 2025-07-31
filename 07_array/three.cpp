#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size){
    int total = 0 ;
    for(int i = 0; i < size ; i++){
        total += chai[i];
    }
    return total;
}

int main(){
    int chaiServed[7] = {50, 60, 65, 70, 80, 85, 90};

    int total = totalChaiServed(chaiServed, 7);
    
    
    return 0;

}