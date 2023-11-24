#include <iostream>

using namespace std;

int main() {

    int* arr = (int *)(malloc(5 * sizeof(int)));

        cout << "Values from 1 to 5: ";
        for (int i = 0; i < 5; ++i) {
            arr[i] = i + 1;
            cout << arr[i] << " ";
        }
        cout <<endl;


        arr = (int *)(realloc(arr, 10 * sizeof(int)));

            for (int i = 5; i < 10; ++i)
                {
                arr[i] = i + 1;

            }
            cout << "Values from 1 to 10: ";
            for (int i = 0; i < 10; ++i)
            {
                cout << arr[i] << " ";

            }

            cout <<endl;

            free(arr);
            return 0;
}
