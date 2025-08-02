#include <iostream>
#include <vector>


using namespace std;

class Chai {
    public:
        // data members (attributes)
        string teaName; // name of the tea
        int servings; // Number of servings
        vector<string> ingredients; // list of ingredients for the tea

        //member function 

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
    Chai chaiOne;

    chaiOne.teaName = "lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"water", "lemon", "honey", "tea"};

    chaiOne.displayChaiDetails();
    
    return 0;
}
