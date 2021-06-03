#include <iostream>

using namespace std;

int main ()
{
    int n, c = 0;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++) {
        
         c = i + 1;

        do{

        if (A[i] == A[c])
            A[c] = 0;

        c++;

        }while(c < n);
    }

    for (int i = 0; i < n; i++) {
        if(A[i] > 0)
            cout << A[i] << " ";
    }

    return 0;

}
