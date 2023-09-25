#include <iostream>

using namespace std;

int main(){
    int mathsMarks, englishMarks, physicsMarks, chemistryMarks, computerMarks;
    cout << "Enter marks of Maths: ";
    cin >> mathsMarks;
    cout << "Enter marks of English: ";
    cin >> englishMarks;
    cout << "Enter marks of Physics: ";
    cin >> physicsMarks;
    cout << "Enter marks of Chemistry: ";
    cin >> chemistryMarks;
    cout << "Enter marks of Computer: ";
    cin >> computerMarks;
    int sum = mathsMarks + englishMarks + physicsMarks + chemistryMarks + computerMarks;
    float percentage = (sum / 500.0) * 100;
    cout << "You scored " << percentage << "% " << endl;
}