#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // deligating constructor 

        Chai(string name): Chai(name, 1, {"water", "tea leaves"}){};

        //main character

        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;

            cout << "Main Constructor called!" << endl;
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
    Chai quickChai("quick chai");
    quickChai.displayChaiDetails();
    
    return 0;
   
}