#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Chai{
        private:
            string teaName;
            int servings;


        public:
        
            Chai(string name, int serve): teaName(name), servings(serve){}

            friend bool compareServings(Chai &chai1, const Chai &chai2);


            void display() const {
                cout << "teaname: " << teaName << endl;

            }
    };

    bool compareServings(const Chai &chai1, const Chai &chai2){
        return chai1.servings > chai2.servings;
    }

int main(){
    Chai masalaChai("masala chai", 4);
    Chai gingerChai("ginger chai", 8);

    masalaChai.display();
    gingerChai.display();

    if(compareServings(masalaChai, gingerChai)){
        cout << "masala chai is having More servings" << endl;

    }else {
        cout << "masala chai is having Less servings" << endl;
    }

    
}
