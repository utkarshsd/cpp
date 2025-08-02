#include <iostream>
#include <string>

using namespace std;

class Tea {
    public:
        virtual void prepareIngredients() = 0; //pure virtual fuction
        virtual void brew() = 0; //pure virtual fuction
        virtual void serve() = 0; //pure virtual fuction

    void makeTea(){
        prepareIngredients();
        brew();
        serve();
    }
};

//derived class

class GreenTea: public Tea{
public:
    void prepareIngredients() override{
        cout << "green leaves and water is ready" << endl;
    }
    void brew() override{
        cout << "tea brewed" << endl;
    }
    void serve() override{
        cout << "green tea served" << endl;
    }
};
class MasalaTea: public Tea{
public:
    void prepareIngredients() override{
        cout << "masala leaves and water is ready" << endl;
    }
    void brew() override{
        cout << "tea brewed" << endl;
    }
    void serve() override{
        cout << "masala tea served" << endl;
    }
};

int main(){
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}