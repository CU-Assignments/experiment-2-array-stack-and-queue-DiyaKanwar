#include <iostream>
using namespace std;

int main() {
    int n, t;
    cout << "Enter size of array:\n ";
    cin >> n;
    int arr[n];  
    cout << "Enter the target value:\n ";
    cin >> t;
    
    cout << "Input array:\n ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                cout << "First pair found: " << arr[i] << " " << arr[j] << endl;
                found = true;
                break;  
            }
        }
        if (found) break;  
    }
    if (!found) {
        cout << "No pairs found." << endl;  
    }
    return 0;
}
