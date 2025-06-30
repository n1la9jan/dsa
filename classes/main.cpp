#include <iostream>
using namespace std;

class Valorant {
    virtual void Signing() = 0;
};

class Clove: Valorant {
    private:
        int Age;
        int AgentNumber;
        string Name;
    public:
        void printName() {
            cout << "Name: " << Name << endl;
            cout << "Age: " << Age << endl;
            cout << "agentNumber: " << AgentNumber << endl;
        }
        Clove(int age, int agentNum, string name) {
            Age = age;
            AgentNumber = agentNum;
            Name = name;
        }
        void Signing() override {
            Age >= 500 ? cout << "U r in" << endl : cout << "U r not in" << endl;
        }
};


int main() {
    Clove clove = Clove(999, 25, "Ollie Baird");
    clove.printName();
    clove.Signing();
    return 0;
}