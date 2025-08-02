#include <iostream>
#include <vector>


using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;
        //parameter constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
            cout << " Param constructor called" << endl;
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
    Chai lemonTea("lemon tea", 2, {"water", "lemon", "honey"});
    lemonTea.displayChaiDetails();

    return 0;
}