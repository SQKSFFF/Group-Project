#include <iostream>
#include <string>
#include <limits>

using namespace std;

//show movie genre menu
void displayMenu() {
    cout <<"\n===== Netflix Movie Recommendation Assistant =====\n";
    cout <<"Please select the movie genres that interest you.：\n";
    cout <<"1. Action\n";
    cout <<"2. Comedy\n";
    cout <<"3. Sci-Fi\n";
    cout <<"4. Horror\n";
    cout <<"5. Animation\n";
    cout <<"6. Drama\n";
    cout <<"7. Documentary\n";
    cout <<"8. Romance\n";
    cout <<"0. Exit\n";
    cout <<"Please enter an option. (0-8): ";
}

// Recommend movies based on user selection.
void recommendMovie(int choice) {
    switch (choice) {
        case 1:
            cout << "\nMovie Recommendations：《Extraction》(2020)\n";
            cout << "Type：Action/Thriller\n";
            cout << "Introduction：A black-market mercenary is sent to rescue the kidnapped son of a drug lord, and the mission descends into chaos.\n";
            break;
        case 2:
            cout << "\nMovie Recommendations：《The Wrong Missy》(2020)\n";
            cout << "Type：Comedy/Romance\n";
            cout << "Introduction：A man mistakenly invites a nightmare blind date to his company retreat, sparking a series of hilarious events.\n";
            break;
        case 3:
            cout << "\nMovie Recommendations：《The Adam Project》(2022)\n";
            cout << "Type：Sci-Fi/Adventure\n";
            cout << "Introduction：A time-traveling pilot joins forces with his younger self to save the future.\n";
            break;
