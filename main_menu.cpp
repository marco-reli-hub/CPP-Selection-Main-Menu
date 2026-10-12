// Make a main menu for all the selection codes.

#include <iostream>
using namespace std;

int main()
{
    // Variables Initialization and declaration
    int choice;

    int prelim; 
    int midterm;
    int finals;
    int average;

    int pn_num;

    int eo_num;

    int largest_num_1;
    int largest_num_2;

    int smallest_num_1;
    int smallest_num_2; 
    int smallest_num_3;

    int GWA_prelim; 
    int GWA_midterm;
    int GWA_finals;
    int GWA_average;

    int temperature;

    string salesman_name;
    string salesman_number;
    double unit_sold;
    double unit_price;
    double total_sales;
    double commission;

    int day;

    char letter;

    cout << "This is the Main Menu for all the Sequnence Flowchart Projects!" << endl;
    cout << "[ Main Menu:                                                   ]" << endl;
    cout << "[ 0 - Exit!                                                    ]" << endl;
    cout << "[ 1 - Passed or Failed Grade.                                  ]" << endl;
    cout << "[ 2 - Positive or Negative Number.                             ]" << endl;
    cout << "[ 3 - Even or Odd Number.                                      ]" << endl;
    cout << "[ 4 - Largest Number.                                          ]" << endl;
    cout << "[ 5 - Smallest Number.                                         ]" << endl;
    cout << "[ 6 - GWA Average.                                             ]" << endl;
    cout << "[ 7 - Weather Temperature.                                     ]" << endl;
    cout << "[ 8 - Total Sales Commission.                                  ]" << endl;
    cout << "[ 9 - Day Format.                                              ]" << endl;
    cout << "[10 - Vowel or Consonant Letter.                               ]" << endl << endl;

    do {
        cout << "Enter a number: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter your prelim grade: ";
            cin >> prelim;
            cout << "Enter your midterm grade: ";
            cin >> midterm;
            cout << "Enter your finals grade: ";
            cin >> finals;

            average = (prelim + midterm + finals) / 3;

            cout << endl << "General Average: " << average << endl;
            if (average >= 75) {
                cout << "You passed the semester!" << endl;
            }
            else {
                cout << "You failed the semester!" << endl;
            }
            cout << endl;
            break;

        case 2:
            cout << "Enter a number: ";
            cin >> pn_num;

            if (pn_num > 0) {
                cout << pn_num << " is a positive number!" << endl;
            }
            else if (pn_num < 0) {
                cout << pn_num << " is a negative number!" << endl;
            }
            else {
                cout << pn_num << " is a neutral number!" << endl;
            }
            cout << endl;
            break;

        case 3:
            cout << "Enter a number: ";
            cin >> eo_num;

            if (eo_num % 2 == 0) {
                cout << eo_num << " is an even number!" << endl;
            }
            else {
                cout << eo_num << " is an odd number!" << endl;
            }
            cout << endl;
            break;

        case 4:
            cout << "Enter the first number: ";
            cin >> largest_num_1;
            cout << "Enter the second number: ";
            cin >> largest_num_2;

            if (largest_num_1 > largest_num_2) {
                cout << "The first number(" << largest_num_1 << ") is bigger than the second number(" << largest_num_2 << ")." << endl;
            }
            else if (largest_num_2 > largest_num_1) {
                cout << "The second number(" << largest_num_2 << ") is bigger than the first number(" << largest_num_1 << ")." << endl;
            }
            else {
                cout << "The first number(" << largest_num_1 << ") and the second number(" << largest_num_2 << ") are the same number!" << endl;
            }
            cout << endl;
            break;

        case 5:
            cout << "Enter the first number: ";
            cin >> smallest_num_1;
            cout << "Enter the second number: ";
            cin >> smallest_num_2;
            cout << "Enter the third number: ";
            cin >> smallest_num_3;

            if (smallest_num_1 <= smallest_num_2 && smallest_num_1 <= smallest_num_3) {
                cout << "The first number(" << smallest_num_1 << ") is the smallest number!" << endl;
            }
            else if (smallest_num_2 <= smallest_num_1 && smallest_num_2 <= smallest_num_3) {
                cout << "The second number(" << smallest_num_2 << ") is the smallest number!" << endl;
            }
            else if (smallest_num_3 <= smallest_num_1 && smallest_num_3 <= smallest_num_2) {
                cout << "The third number(" << smallest_num_3 << ") is the smallest number!" << endl;
            }
            cout << endl;
            break;

        case 6:
            cout << "Enter your prelim grade: ";
            cin >> GWA_prelim;
            cout << "Enter your midterm grade: ";
            cin >> GWA_midterm;
            cout << "Enter your finals grade: ";
            cin >> GWA_finals;

            GWA_average = (GWA_prelim + GWA_midterm + GWA_finals) / 3;
            cout << "General Average: " << GWA_average << endl;

            if (GWA_average >= 75) {
                cout << "You passed the semester!" << endl;
            }
            else {
                cout << " You failed the semester!" << endl;
            }

            if (GWA_average >= 97 && GWA_average <= 100) {
                cout << "Your GPA is 1.0!" << endl;
            }
            else if (GWA_average >= 94 && GWA_average <= 96) {
                cout << "Your GPA is 1.25!" << endl;
            }
            else if (GWA_average >= 91 && GWA_average <= 93) {
                cout << "Your GPA is 1.5!" << endl;
            }
            else if (GWA_average >= 88 && GWA_average <= 90) {
                cout << "Your GPA is 1.75!" << endl;
            }
            else if (GWA_average >= 86 && GWA_average <= 87) {
                cout << "Your GPA is 2.0!" << endl;
            }
            else if (GWA_average >= 82 && GWA_average <= 85) {
                cout << "Your GPA is 2.25!" << endl;
            }
            else if (GWA_average >= 79 && GWA_average <= 81) {
                cout << "Your GPA is 2.5!" << endl;
            }
            else if (GWA_average >= 76 && GWA_average <= 78) {
                cout << "Your GPA is 2.75!" << endl;
            }
            else if (GWA_average == 75) {
                cout << "Your GPA 3.0!" << endl;
            }
            else if (GWA_average >= 0 && GWA_average <= 74) {
                cout << "Your GPA 5.0!" << endl;
            }
            else {
                cout << "Invalid Grade!" << endl;
            }
            cout << endl;
            break;

        case 7:
            cout << "Enter the temperature: ";
            cin >> temperature;

            if (temperature < 0) {
                cout << "It's freezing weather!" << endl;
            }
            else if (temperature > 0 && temperature <= 10) {
                cout << "It's very cold weather!" << endl;
            }
            else if (temperature > 10 && temperature <= 20) {
                cout << "It's cold weather!" << endl;
            }
            else if (temperature > 20 && temperature <= 30) {
                cout << "It's normal weather!" << endl;
            }
            else if (temperature > 30 && temperature <= 40) {
                cout << "It's hot weather" << endl;
            }
            else if (temperature > 40) {
                cout << "It's very hot weather!" << endl;
            }
            cout << endl;
            break;

        case 8:
            cout << "Enter your name: ";
            cin >> salesman_name;
            cout << "Enter your number: ";
            cin >> salesman_number;
            cout << "Enter your unit sold: ";
            cin >> unit_sold;
            cout << "Enter your unit price: ";
            cin >> unit_price;

            total_sales = unit_sold * unit_price;

            cout << endl << "INFO ----------------------------------------------" << endl;
            cout << "Salesman Name    :  " << salesman_name << endl;
            cout << "Salesman Number  :  " << salesman_number << endl;
            cout << "Total Sales      :  " << total_sales << endl;

            if (total_sales <= 15000) {
                commission = total_sales * 0.15;
                cout << "Commission       :  " << commission << endl;
            }
            else if (total_sales <= 20000) {
                commission = total_sales * 0.20;
                cout << "Commission       :  " << commission << endl;
            }
            else if (total_sales <= 25000) {
                commission = total_sales * 0.25;
                cout << "Commission       :  " << commission << endl;
            }
            else if (total_sales <= 30000) {
                commission = total_sales * 0.30;
                cout << "Commission       :  " << commission << endl;
            }
            else if (total_sales > 30000) {
                commission = total_sales * 0.40;
                cout << "Commission       :  " << commission << endl;
            }
            cout << endl;
            break;

        case 9:
            cout << "Enter a number (1-7): ";
            cin >> day;

            switch (day) {
            case 1:
                cout << "It's Monday!" << endl;
                break;
            case 2:
                cout << "It's Tuesday!" << endl;
                break;
            case 3:
                cout << "It's Wednesday!" << endl;
                break;
            case 4:
                cout << "It's Thursday!" << endl;
                break;
            case 5:
                cout << "It's Friday!" << endl;
                break;
            case 6:
                cout << "It's Saturday!" << endl;
                break;
            case 7:
                cout << "It's Sunday!" << endl;
                break;
            default:
                cout << "Invalid Input!" << endl;
                break;
            }
            cout << endl;
            break;

        case 10:
            cout << "Enter a letter: ";
            cin >> letter;

            switch (letter) {
            case 'a':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'e':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'i':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'o':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'u':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'A':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'E':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'I':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'O':
                cout << "It's a vowel letter!" << endl;
                break;
            case 'U':
                cout << "It's a vowel letter!" << endl;
                break;
            default:
                cout << "It's a consonant letter!" << endl;
                break;
            }
            cout << endl;
            break;

        case 0:
            cout << "Exited!" << endl << endl;
            break;

        default:
            cout << "Invalid Input!" << endl << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
