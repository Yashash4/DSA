#include <iostream.h>
void insert_at(int arr[], int size, int index, int value) {
    if (index >= 0 && index <= size) {
        for (int i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
    }
}
int main() {
    int arr[6] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 2;
    int value = 10;
    insert_at(arr, size, index, value);
    size++;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
