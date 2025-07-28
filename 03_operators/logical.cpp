#include <iostream>

using namespace std;

int main(){
    bool isStudent;
    int cups;

    cout << "are you a student (1 for yes and for no)?";
    cin>> isStudent;
    

    cout<< "how many cups of tea you have purchased ?";
    cin >> cups;

    
    if(isStudent || cups > 15){
        cout<<"you are eligible for a discount" << endl;
    } else{
        cout<< "you are not eligible for discount"<< endl;
    }
    
    return 0;
}