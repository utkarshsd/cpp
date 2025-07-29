// returnType functionname(parameters){
    //function body
// }
//void

#include <iostream>

int checkTemperature(int temperature){
    return temperature;

}

int main(){
    int temp = checkTemperature(50);
    std::cout<< temp;
}