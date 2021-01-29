#include <iomanip>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

/**
 * Print Source data in matrix format
 *
 * @param multidimensional array.
 * @return null
 */
void showElements(int sourceData[][5])
{
    cout << "Source Data:" << endl
         << endl;
    cout << "State Code"
         << "\t\t"
         << "Joe Biden Votes"
         << "\t\t"
         << "Donald Trump Votes"
         << "\t"
         << "Jo Jorgensen Votes"
         << "\t"
         << "Total votes" << endl
         << endl;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cout << sourceData[i][j] << "\t\t\t";
        }
        cout << endl;
    }

    cout << endl;
}

/**
 * Calculate and print percentage of the choosen state for Biden
 *
 * @param multidimensional array.
 * @return null
 */
void PercentageBiden(int option, int sourceData[][5])
{
    double percentage;
    cout << "Percentage of Joe Biden votes is: " << (float)(sourceData[option - 1][1] * 100) / (float)sourceData[option - 1][4] << endl
         << endl;
}

/**
 * Calculate and print percentage of the choosen state for trump
 *
 * @param multidimensional array.
 * @return null
 */
void PercentageTrump(int option, int sourceData[][5])
{
    cout << "Percentage of Trump votes is: " << (float)(sourceData[option - 1][2] * 100) / (float)sourceData[option - 1][4] << endl
         << endl;
}

/**
 * Calculate and print percentage of the choosen state for Jorgensen
 *
 * @param multidimensional array.
 * @return null
 */
void PercentageJorgensen(int option, int sourceData[][5])
{
    cout << "Percentage of Jo Jorgensen votes is: " << (float)(sourceData[option - 1][3] * 100) / (float)sourceData[option - 1][4] << endl
         << endl;
}

int main()
{
    int sourceData[3][5] = {
        {1, 5284453, 5658847, 70046, 11013346},
        {2, 2465781, 2455428, 61894, 4983103},
        {3, 2790648, 2644525, 60287, 5495460}};
    int option = 0;

    showElements(sourceData);

    do
    {
        cout << "Press the state code to calculate percentage of Trump, Biden and Jorgensen votes " << endl
             << endl;
        cout << "Press 1 for Florida." << endl;
        cout << "Press 2 for Georgia." << endl;
        cout << "Press 3 for Michigan." << endl;
        cout << "Press 4 to Exit" << endl
             << endl;

        cout << "Please select an option, use numbers from 1 to 4: ";
        cin >> option;

        if (option < 1 || option > 4)
        {
            cout << endl
                 << "Choice should be between 1 and 4" << endl;
            cout << "Invalid choice, please select again: " << endl
                 << endl;
        }
        else if (option != 4)
        {
            cout << "------------------------------------------------" << endl;
            PercentageBiden(option, sourceData);
            PercentageTrump(option, sourceData);
            PercentageJorgensen(option, sourceData);
        }

    } while (option != 4);

    return 0;
}

/**
 * Fall-2020_CS201_2_Solution.cpp
 */