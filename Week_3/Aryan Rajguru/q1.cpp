#include <iostream>
using namespace std;

void moveNegatives(int arr[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] < 0)
            swap(arr[i], arr[j++]);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveNegatives(arr, n);
    return 0;
}