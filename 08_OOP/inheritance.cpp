#include <iostream>
#include <string>
#include <vector>


using namespace std;

//base class

class Tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string name, int serve): teaName(name), servings(serve){
            cout<< "tea constructor called"<< teaName <<endl;
         }

         virtual void brew() const {
            cout << "Brewing" << teaName << " with generic method" << endl;
         }
         virtual void serve() const {
            cout << "serving" << teaName << " cup of tea with generic method" << endl;
         }
         virtual ~Tea(){
            cout << "Tea destructor called for " << teaName << endl;
         }
};


class GreenTea: public Tea {
    public:
        GreenTea(int serve): Tea("green tea", serve){
            cout << "green tea constructor called" << endl;
        }

        void brew() const override{
            cout << "brewing" << teaName << " by steeping green tea leaves" << endl;
        }

        ~GreenTea(){
            cout << "green tea constructor called" << endl;
        }
};

class MasalaTea : public Tea {
    public:
        MasalaTea(int serve): Tea("masala tea", serve){
            cout << "masala tea constructor called" << endl;
        }

        void brew() const override final{
            cout << "brewing" << teaName << "with spices and milk" << endl;
        }

        ~MasalaTea(){
            cout << "masala tea destructor called" << endl;
        }
};

// class SpicyMasalaTea: public MasalaTea{
//     public:
//         void brew() const override{
//             cout << "brewing" << teaName << " with spices and milk"<< endl;
//         }
// };

int main(){

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}
