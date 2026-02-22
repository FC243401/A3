#include <iostream>
using namespace std;
int main() {
int N;
cout << "Enter number of elements: ";
cin >> N;
int data[100];
cout << "Enter sorted elements: ";
for (int i = 0; i < N; i++) {
cin >> data[i];
}
int item;
cout << "Enter item to search: ";
cin >> item;

int BEG = 0;
int END = N - 1;
int MID;
int LOC = 0;
while (BEG <= END) {
        MID = (BEG + END) / 2;
        if (data[MID] == item) {
            LOC = MID + 1;
        }
        else if (item < data[MID]) {
            END = MID - 1;
        }
        else {
            BEG = MID + 1;}}
if (LOC == 0)
        cout << "Item not found." << endl;
    else
        cout << "Item found at location: " << LOC << endl;

    return 0;
}
