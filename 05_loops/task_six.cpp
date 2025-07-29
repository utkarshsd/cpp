#include <iostream>
#include <string>
using namespace std;

int main(){

    string teaTypes[3] = {"green tea", "black tea", "lemon Tea"};

    for (int i = 0; i <3; i++)
    {
        cout<< "brewing "<< teaTypes[i]<<"..."<<endl;
        for(int j=1 ; j <=3; j++){
            cout<<"brewing "<< j <<"cup of" << teaTypes[i]<<endl;
        }
       
        
    }
    
   
    return 0;
}
