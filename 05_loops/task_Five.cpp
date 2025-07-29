#include <iostream>
#include <string>
using namespace std;

int main(){

    string teaTypes[3] = {"green tea", "black tea", "lemon Tea"};

    for (int i = 0; i <3; i++)
    {
        if(teaTypes[i] == "green tea"){
            cout<< " skipping  the "<< teaTypes[i] << endl;
            continue;
        }
        cout<< " brewing "<< teaTypes[i] << ".... "<< endl;
        
    }
    
   
    return 0;
}