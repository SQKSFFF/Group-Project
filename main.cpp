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