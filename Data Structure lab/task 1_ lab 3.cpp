#include <iostream>
using namespace std;

int main()
{
    int marks[6][4] = {
        {85, 90, 78, 88},
        {75, 82, 91, 80},
        {92, 88, 85, 95},
        {68, 74, 80, 72},
        {89, 95, 92, 90},
        {78, 85, 88, 84}
    };

    string subjects[4] = {
        "English", "Mathematics", "Programming", "AI"
    };

    cout << "STUDENT MARKS TABLE\n";
    cout << "Student\t";

    for (int j = 0; j < 4; j++)
    {
        cout << subjects[j] << "\t";
    }

    cout << "Total\tAverage\n";

    for (int i = 0; i < 6; i++)
    {
        int total = 0;

        cout << "Student " << i + 1 << "\t";

        for (int j = 0; j < 4; j++)
        {
            cout << marks[i][j] << "\t";
            total += marks[i][j];
        }

        double average = total / 4.0;

        cout << total << "\t";
        cout << average << endl;
    }

    cout << "\nHIGHEST MARKS IN EACH SUBJECT\n";

    for (int j = 0; j < 4; j++)
    {
        int highest = marks[0][j];

        for (int i = 1; i < 6; i++)
        {
            if (marks[i][j] > highest)
            {
                highest = marks[i][j];
            }
        }

        cout << subjects[j] << ": " << highest << endl;
    }

    int highestTotal = 0;
    int highestStudent = 0;

    for (int i = 0; i < 6; i++)
    {
        int total = 0;

        for (int j = 0; j < 4; j++)
        {
            total += marks[i][j];
        }

        if (total > highestTotal)
        {
            highestTotal = total;
            highestStudent = i;
        }
    }

    cout << "\nSTUDENT WITH HIGHEST TOTAL MARKS\n";
    cout << "Student " << highestStudent + 1 << endl;
    cout << "Total Marks: " << highestTotal << endl;

    return 0;
}