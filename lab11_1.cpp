#include<iostream>
using namespace std;

    int score;

void rds() {
    score = rand()%9 + 1;
}

void grade() {
    switch(score) {
        case 9:
            cout << "You will get A in this 261102.";
            break;
        case 8:
            cout << "You will get B+ in this 261102.";
            break;
        case 7:
            cout << "You will get B in this 261102.";
            break;
        case 6:
            cout << "You will get C+ in this 261102.";
            break;
        case 5:
            cout << "You will get C in this 261102.";
            break;
        case 4:
            cout << "You will get D+ in this 261102.";
            break;
        case 3:
            cout << "You will get D in this 261102.";
            break;
        case 2:
            cout << "You will get F in this 261102.";
            break;
        case 1:
            cout << "You will get W in this 261102.";
            break;
    }
}

int main() {
    
    srand(time(0));
    
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    rds();
    grade();

    return 0;
}
