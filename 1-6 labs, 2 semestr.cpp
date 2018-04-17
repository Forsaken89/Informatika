#include <iostream>

using namespace std;

class Bear {
private:

    double age, weight, growth;
    static int counter;

    friend void setData(Bear &, double, double, double);

public:
    Bear() {
        age = 14;
        weight = 400;
        growth = 125;
        counter++;
    }

    Bear(double age, double weight, double growth) {
        this->age = age;
        this->weight = weight;
        this->growth = growth;
        counter++;

    }

    Bear(const Bear &H) {
        age = H.age;
        weight = H.weight;
        growth = H.growth;
        counter++;
    }

    ~Bear() {
        counter--;
    }

    void getInfo() {
        cout <<"Age: "<<age<< "\nWeight:"<<weight<< "\nGrowth: "<<growth<< endl<<endl;
    }

    void say() {
        cout << "Ar-rar" << endl;
    }

    static int getCounter() {
        return counter;
    }

};

int Bear::counter = 0;

void setData(Bear &H, double a, double w, double g) {
    H.age = a;
    H.weight = w;
    H.growth = g;
}

int main() {
    Bear Medved;
    Bear Medvejonok(1, 2, 3);
    Bear Medved1(Medved);

    setData(Medvejonok, 2, 50, 40);
    Medved.say();
    Medved.getInfo();
    Medvejonok.getInfo();
    Medved1.getInfo();
    cout<<"Kolichestvo: "<<Medved.getCounter()<<endl;
    return 0;
}
