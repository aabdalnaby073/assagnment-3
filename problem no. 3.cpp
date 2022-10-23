#include <iostream>
using namespace std;

struct Player
{
    char name[50];
    int roll;
    int score;
} P[10];

int main()
{     
    int choice;

    cout << "select what you want :" << endl;
    cout << "1 - enter players information " << endl;
    cout << "2 - diplay names and scores " << endl;
    cout << "3 - exit " << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter name of the player: " << endl;

        // storing information
        for (int i = 0; i < 10; ++i)
        {
            P[i].roll = i + 1;
            cout << "For roll number" << P[i].roll << "," << endl;

            cout << "Enter name: ";
            cin >> P[i].name;

            cout << "Enter score: ";
            cin >> P[i].score;

            cout << endl;
        }

    }
    else if (choice == 2)
    {
        cout << "Displaying Information: " << endl;

        // Displaying information
        for (int i = 0; i < 10; ++i)
        {
            cout << "\nRoll number: " << i + 1 << endl;
            cout << "Name: " << P[i].name << endl;
            cout << "score: " << P[i].score << endl;
        }
    }
    else if (choice == 3)
    {
        exit(0);
    }


    return 0;
}