#include <iostream>
using namespace std;

struct Car
{
    bool isDrive = false;
    string model;
    int wheels;
    int places;
    
    char lastTurn = ' ';

    void drive()
    {
        cout << endl;
        if (this->wheels < 2 || this->places < 1)
        {
            cout << "Car not driving";
            this->isDrive = false;
            return;
        }
        else
        {
            cout << "Car driving";
            this->isDrive = true;
        }
        
    }
    void stop()

    {
        cout << "stop the car? (1)" << endl;
        cout << "move on? (2)" << endl;
        int stop;
        cin >> stop;
        if (stop == 1)
        {
            cout << "the car stopped ";
            this->isDrive = false;
        }
        else if (stop == 2)
        {
            cout << "the car is moving ";
            this->isDrive = true;
        }
    }
};

int main()
{
    int metr = 1;
    while (true)
    {
        Car car;
        cout << "1) Up" << endl;
        cout << "2) Down" << endl;
        cout << "3) Left" << endl;
        cout << "4) Right" << endl;
        cout << "5) quit" << endl;
        
        int choose;
        cout << "write your choose: " << endl;
        cin >> choose;

        if (choose == 1)
        {
            cout << "your car forward driving " << metr << " M" << endl;
            metr += 1;
        }
        else if (choose == 2)
        {
            metr -= 1;
            cout << "your car back driving" << metr << "M" << endl;
        }
        else if (choose == 3)
        {
            if (car.lastTurn == 3)
            {
                metr += 1;
            }
            cout << "your car left driving" << endl;
        }
        else if (choose == 4)
        {
            if (car.lastTurn == 4)
            {
                metr += 1;
            }
            cout << "your car right driving" << endl;
        }
        if (choose == 5)
        {
            break;
        }

    }
    
}

