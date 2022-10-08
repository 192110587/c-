// C++ program to demonstrate hierarchical inheritance
//K.Ashwini Reg.no- 192110587
#include <iostream>
using namespace std;

// base class
class humanbeing {
   public:
    void info() {
        cout << "I am an humanbeing." << endl;
    }
};

// derived class 1
class priya : public humanbeing {
   public:
    void teacher() {
        cout << "I am a teacher." << endl;
    }
};

// derived class 2
class sona : public humanbeing {
   public:
    void doctor() {
        cout << "I am a doctor." << endl;
    }
};

int main() {
    // Create object of Priya class
    Priya priya1;
    cout << "Priya class:" << endl;
    priya1.info();  // Parent Class function
    priya1.teacher();

    // Create object of Sona class
    Sona sona1;
    cout << "\nSona Class:" << endl;
    sona1.info();  // Parent Class function
    sona1.doctor();

    return 0;
}
