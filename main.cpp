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
        case 4:
            cout << "\nMovie Recommendations：《Bird Box》(2018)\n";
            cout << "Type：Horror/Thriller\n";
            cout << "Introduction：A mysterious force drives anyone who sees it to commit suicide; a mother must lead her children to safety while blindfolded.\n";
            break;
        case 5:
            cout << "\nMovie Recommendations：《Over the Moon》(2020)\n";
            cout << "Type：Animation/Family\n";
            cout << "Introduction：A girl builds a rocket to the moon to prove the existence of the legendary Moon Goddess.\n";
            break;
        case 6:
            cout << "\nMovie Recommendations：《The Irishman》(2019)\n";
            cout << "Type：Drama/Crime\n";
            cout << "Introduction：A hitman recalls his past involvement in gang activities and the disappearance of a close friend.\n";
            break;
        case 7:
            cout << "\nMovie Recommendations：《My Octopus Teacher》(2020)\n";
            cout << "Type：Documentary\n";
            cout << "Introduction：A filmmaker forms an extraordinary friendship with an octopus and rediscovers the beauty of nature.\n";
            break;
        case 8:
            cout << "\nMovie Recommendations：《To All the Boys I've Loved Before》(2018)\n";
            cout << "Type：Romance/Youth\n";
            cout << "Introduction：A girl's secret love letter is accidentally sent out, turning her life upside down.\n";
            break;
        default:
            cout << "\nInvalid option; please enter it again.\n";
    }
}
int main() {
    int choice;
    bool running = true;
        cout << "Welcome to the Netflix movie recommendation assistant!\n";
    cout << "This program recommends a Netflix movie based on your genre preferences\n";

    while (running) {
        displayMenu();
        cin >> choice;

        // Input validation: prevent non-numeric input
        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input; please enter a number\n";
            continue;
        }

        if (choice == 0) {
            cout << "\nThank you for using this service.Bye!\n";
            running = false;
        } else if (choice >= 1 && choice <= 8) {
            recommendMovie(choice);
        } else {
            cout << "\nInvalid option; please enter a number between 0 and 8\n";
        }
    }

    return 0;
}
