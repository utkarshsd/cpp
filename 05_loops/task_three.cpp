#include <iostream>

using namespace std;

int main(){
    int teaCups;

    cout << "enter the number of teac cups to server: ";
    cin>> teaCups;
    
   while (teaCups > 0 ){
       
    teaCups--;
    cout << "serving a cup of tea \n" << teaCups << "reamining" <<endl;
   }
  
   
    
    return 0;
}