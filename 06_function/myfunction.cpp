// returnType functionname(parameters){
    //function body
// }
//void

#include <iostream>
using namespace std;

int checkTemperature(int temperature){
    return temperature;

}
//declaration of function 
void serveChai(int cups);
void makeChai(){
    cout<<"boiling water, adding tea leaves, straining...";
}

void serveChai(){}

int main(){
    int temp = checkTemperature(50);
    cout<< temp;
    makeChai();//calling a function

    serveChai(3);
    return 0;

}

void serveChai(int cups){
    cout << " serving " << cups<< " of chai";
}
