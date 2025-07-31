#include <iostream>

using namespace std;

// int helloChai(){

// }

int main(){
    
    // lamda 
    auto preparedChai = [](int cups){
        cout << "preparing "<< cups <<"cups of tea"<< endl;

    };

    preparedChai(4);
    
    return 0;
}