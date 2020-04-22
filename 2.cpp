#include<iostream>

using namespace std;

int main(){
    int A = 0;
    int B = 0;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;
    if(A < B){
        for(int i = A; i<=B; i++)
        {
        cout << i << " ";
        }
    }
    if(A > B){
    for(int i = A; i>=B; i--)
        {
        cout << i << " ";
        }
    }
        cout << " " << endl;
        return 0;
}
