#include <iostream>

using namespace std;

int main(){
    int hour;

    cout << "enter the urrent hour (0-23):";
    cin>> hour;

    if(hour >= 8 && hour <= 18){
        cout <, " tea shop is OPEN"<< endl;

    }else {
        cout << "tea shop is CLOSED"<< endl;
    }
    
    return 0;
}