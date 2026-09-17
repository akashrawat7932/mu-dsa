
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {4, 5, 8, 2, 10};
    int min_value = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    
    int mix_value = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > mix_value) {
            mix_value = arr[i];
        }
    }
    cout << "Minimum value: " << min_value << endl;
        cout << "Mixime value: " << mix_value << endl;
    
    return 0;
}
