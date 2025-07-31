#include <iostream>

using namespace std;

int main(){
    int chaiSales[3][7] = {
        {50, 60 ,55, 70 , 90, 88, 92}, 
        {40, 20 ,55, 90 , 30, 78, 42},
        {30, 50 ,85, 60 , 80, 68, 82}
    };
    
    for(int i = 0 ; i < 3; i++){
        cout << "I am at shop: \n" << i + 1;
        for(int j = 0; j < 7 ; j++){
            cout << chaiSales[i][j] << " cups \n";
        }
    }


    return 0;

}