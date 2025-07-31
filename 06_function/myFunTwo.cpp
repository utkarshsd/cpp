// call by value
#include <iostream>

using namespace std;

void pourChai(int cups){
    cups = cups + 5;
    cout <<"poured cups: "<< cups<<endl;

}

int main(){
    
    int cups = 2;
    pourChai(cups);
    cout << " total cups are " << cups << endl;

    
    return 0;
}