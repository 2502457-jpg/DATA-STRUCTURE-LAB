#include <iostream>
using namespace std;

int main()
{
    int parking[4][5] = {
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 0},
        {1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0}
    };

    int occupied = 0;
    int empty = 0;

    cout << "PARKING LAYOUT\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << parking[i][j] << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (parking[i][j] == 1)
            {
                occupied++;
            }
            else
            {
                empty++;
            }
        }
    }

    cout << "\nTotal Occupied Spaces: " << occupied << endl;
    cout << "Total Empty Spaces: " << empty << endl;

    int row, column;

    cout << "\nEnter row number (1-4): ";
    cin >> row;

    cout << "Enter column number (1-5): ";
    cin >> column;

    row--;
    column--;

    if (parking[row][column] == 0)
    {
        cout << "The selected parking space is AVAILABLE." << endl;
    }
    else
    {
        cout << "The selected parking space is OCCUPIED." << endl;
    }

    int capacity = 4 * 5;

    cout << "\nTotal Parking Capacity: " << capacity << endl;
    cout << "Current Occupancy: " << occupied << endl;
    cout << "Available Spaces: " << empty << endl;

    return 0;
}