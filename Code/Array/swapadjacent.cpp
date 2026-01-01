//Code By: AMULYA MAURYA
//2026-01-01
#include<bits/stdc++.h>
using namespace std;




void swapAlternate(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        
        // if(i + 1 < n) // This check is not necessary due to loop condition
        swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[]={1,2,3,4,5,6,7};

    int n=sizeof(arr)/sizeof(arr[0]);
    

    swapAlternate(arr,n );
    printArray(arr,n);

    return 0;
}