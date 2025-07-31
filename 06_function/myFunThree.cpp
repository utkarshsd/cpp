// call by reference
#include <iostream>

using namespace std;

int globalChaiStock = 100;

void pourChai(int &cups){
    cups = cups + 5;
    cout <<"poured cups: "<< cups<<endl;

}


int main(){
    
    int cups = 2;
    pourChai(cups);
    cout << " total cups are " << cups << endl;

    
    return 0;
}
