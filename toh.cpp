#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout << A << " , " << C << endl;
        TOH(n-1,B,A,C);
    }
}
/*
n = Number Of Disc
A = Source
B = Helper
C = Destination
*/
int main() {
    
    TOH(3,'a','b','c');
    return 0;
}
