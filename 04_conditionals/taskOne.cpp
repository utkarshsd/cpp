#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaOrder;

    cout<< "enter your order";
    getline(cin, teaOrder);

    if(teaOrder == "green tea"){
        cout << "you have ordered green tea" << endl;
    }
    cout << "all cups are served"<< endl;
    return 0;
}