#include <iostream>

using namespace std;

int main(){
    int cups;

    cout << "enter the number of cups: ";
    cin>> cups;
    
    if(cups > 20){
        cout<<"you will get a gold badge" << endl;
    } else if (cups >= 10 && cups <= 20) {
        cout << "you will get a silver badge" << endl;

    } else{
        cout<< " no badge for you"<< endl;
    }
    
    return 0;
}


