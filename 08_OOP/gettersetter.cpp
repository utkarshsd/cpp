#include <iostream>
#include <vector>


using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

public:
    Chai(){
        teaName = "unknown tea";
        servings = 1;
        ingredients = {"water","tea leaves"};

    }

    Chai(string name, int serve, vector<string> ingr){
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }

    //getter 
    string getTeaName(){
        return teaName;

    }
    //setter
    void setTeaName(string name){
        //logic
        teaName = name;
    }
    //getter for servings
    int getServings(){
        return servings;
    }
    //setter for servingd
    void setServings(int serve){
        servings = serve;
    }
    //getter for ingr
    vector<string> getIngredients(){
        return ingredients;
    }
    //setter for ingr
    void setIngredients(vector<string> ingr){
        ingredients = ingr;
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
    Chai chai;
    chai.setTeaName("ginger tea");
    
}