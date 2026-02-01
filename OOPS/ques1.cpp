// create a class for car and display twp functions and invoke them..
#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        string model;

        void start() {
            cout << brand << " " << model << " is starting." << endl;
        }
};

int main() {

    Car A;
    A.brand = "Toyota";
    A.model = "Corolla";
    A.start();

    return 0;
}