#include <iostream>
#include <vector>


using namespace std;

class Chai{
    public:
        string* teaName;
        int servings;
        vector<string> ingredients;
        //parameter constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName =new string(name);
            servings = serve;
            ingredients = ingr;
            cout << " Param constructor called" << endl;
        }
        Chai(const  Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients;
            cout << "copy constructor called \n"<< endl;
        }




        ~Chai(){ //destructor
            delete teaName;
            cout << "destructor called \n";

        }
        
        void displayChaiDetails(){
        cout << "tea name: " << *teaName << endl;
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
    // lemonTea.displayChaiDetails();

    //copy the object
    Chai copiedChai = lemonTea;
    // copiedChai.displayChaiDetails();


    *lemonTea.teaName = "modified lemon tea";

    cout<<"lemon tea --------" << endl;
    lemonTea.displayChaiDetails();
    cout<< "copied tea--------"<< endl;
    copiedChai.displayChaiDetails();



    return 0;
}