#include <iostream>
using namespace std;

class Valorant {
    //abstracation
    virtual void Signing() = 0;
    //virtual is used to declare a function as virtual, allowing derived classes to override it.
};

class Clove: Valorant {
    //protected members are accessible in derived classes
    //private members are not accessible in derived classes and only accessible within the class itself
    //public members are accessible from anywhere in the program where the object is visible
    protected:
        int Age;
        int AgentNumber;
        string Name;
    public:
        //method to print the name, age, and agent number
        void printName() {
            cout << "Name: " << Name << endl;
            cout << "Age: " << Age << endl;
            cout << "agentNumber: " << AgentNumber << endl;
        }
        // constructor
        Clove(int age, int agentNum, string name) {
            Age = age;
            AgentNumber = agentNum;
            Name = name;
        }
        //method
        virtual void Signing() override {
            Age >= 100 ? cout << "U r in" << endl : cout << "U r not in" << endl;
        }
};

class Player: public Clove {
    public:
        string FavSkin;
        string Rank;
        Player(int age, int agentNum, string name, string favskin, string rank): Clove(age, agentNum, name) {
            FavSkin = favskin;
            Rank = rank;
        }
        void ShowRank() {
            cout << Name << "'s Fav Skin: " << FavSkin << " and rank is "<< Rank << endl;
        }

        // polymorphism
        void Signing() override {
            Age == 500 ? cout << "U r in" << endl : cout << "U r not in" << endl;
        }
};
class PlayerTwo : public Clove {
    public:
        string FavSkin;
        string Rank;
        PlayerTwo(int age, int agentNum, string name, string favskin, string rank): Clove(age, agentNum, name) {
            FavSkin = favskin;
            Rank = rank;
        }
        void ShowRank() {
            cout << Name << "'s Fav Skin: " << FavSkin << " and rank is "<< Rank << endl;
        }

        // polymorphism
        void Signing() override {
            Age >= 500 ? cout << "U r in" << endl : cout << "U r not in" << endl;
        }
};

int main() {
    cout << "\n-----Valorant Player Info-----" << endl;
    cout <<"\n" << endl;
    Player player = Player(999, 25, "Ollie Baird", "Kuronami Vandal", "Immortal");
    player.ShowRank();
    player.printName();
    player.Signing();
    cout <<"\n" << endl;
    PlayerTwo playerTwo = PlayerTwo(500, 24, "Li Zhao Yu", "Evori Dreamwings", "Diamond");
    playerTwo.ShowRank();
    playerTwo.printName();
    playerTwo.Signing();


//polymorphism base class used to referring derived class objects

    cout << "\n-----Polymorphism---\n" << endl;

    Clove* clovePtr = &player;
    Clove* clovePtrTwo = &playerTwo;

    clovePtr->Signing();
    clovePtrTwo->Signing();

    return 0;
}