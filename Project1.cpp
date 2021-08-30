#include <iostream>
using namespace std;

class Employer {
public:
    int salary;
    Employer()
    {
        this->salary = 6500;
    }
    virtual void Print() = 0;
    virtual ~Employer() {
        cout << "Employer delete";
    }
};

class Woker :public Employer {
public:
    virtual void Print() {
        cout << "Your salary is " << salary << endl;
    }
};
class Manager :public Employer {
public:
    Manager() : Employer()
    {
        salary *= 5;
    }
    virtual void Print() {
        cout << "Your salary is " << salary << endl;
    }
};

class President :public Employer {
public:

    President() :Employer()
    {
        salary *= 10;
    }
    virtual void Print() {
        cout << "Your salary is " << salary << endl;
    }
};

int main()
{
    Employer* obj_e[3] = { new Woker, new Manager, new President };
    int action = 0;
    cout << "Choose your status: 1 - Woker, 2 - Manager, 3 - President->";
    cin >> action;
    obj_e[action - 1]->Print();

    return 0;

}

/*1.	Создать абстрактный базовый класс Employer (слу-
жащий) с чисто виртуальной функцией Print(). Соз-
дайте три производных класса: President, Manager,
Worker. Переопределите функцию Print() для вывода
информации, соответствующей каждому типу слу-
жащего.*/
