#include <iostream>
#include <vector>


using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;
        //default constructor
        Chai(){
            teaName = "unknown tea";
            servings = 1;
            ingredients = {"water", "tea leaves"};
            cout << " constructor called" << endl;
        }
        
        void displayChaiDetails(){
        cout << "tea name: " << teaName << endl;
        cout << "servings: " << servings << endl;
        cout << " ingredients: ";  
            for(string ingredient : ingredients){
                cout << ingredient <<" ";


            }
            cout << endl;

        }
    

};

int main(){
    Chai defaultChai;
    defaultChai.displayChaiDetails();

    return 0;
}