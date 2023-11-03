#include <iostream>
using namespace std;

void traverse(int arr[], int size);
int search(int arr[], int size, int element);
void insertion(int arr[], int& size, int element, int index);
void deletion(int arr[], int& size, int index);
void selection_sort(int arr[], int size);
void insertion_sort(int arr[], int size);
void bubble_sort(int arr[], int size);
void quick_sort(int arr[], int left, int right);

int main() {
    int size, choice, element, index;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "What do you want to do with the array?" << endl;
    cout << "1. Traverse" << endl;
    cout << "2. Search" << endl;
    cout << "3. Insert" << endl;
    cout << "4. Delete" << endl;
    cout << "5. Sort" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            traverse(arr, size);
            break;
        case 2:
            cout << "Enter the element to search: ";
            cin >> element;
            if (search(arr, size, element) != -1) {
                cout << "Element found at index " << search(arr, size, element) << endl;
            } else {
                cout << "Element not found" << endl;
            }
            break;
        case 3:
            cout << "Enter the element to insert: ";
            cin >> element;
            cout << "Enter the index where to insert: ";
            cin >> index;
            insertion(arr, size, element, index);
            cout << "Array after insertion: ";
            traverse(arr, size);
            break;
        case 4:
            cout << "Enter the index of the element to delete: ";
            cin >> index;
            deletion(arr, size, index);
            cout << "Array after deletion: ";
            traverse(arr, size);
            break;
        case 5:
            int sort_choice;
            cout << "Select a sorting technique:" << endl;
            cout << "1. Selection Sort" << endl;
            cout << "2. Insertion Sort" << endl;
            cout << "3. Bubble Sort" << endl;
            cout << "4. Quick Sort" << endl;
            cout << "Enter your choice: ";
            cin >> sort_choice;
            switch (sort_choice) {
                case 1:
                    selection_sort(arr, size);
                    break;
                case 2:
                    insertion_sort(arr, size);
                    break;
                case 3:
                    bubble_sort(arr, size);
                    break;
                case 4:
                    quick_sort(arr, 0, size - 1);
                    break;
                default:
                    cout << "Invalid choice" << endl;
            }
            cout << "Array after sorting: ";
            traverse(arr, size);
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}
void traverse(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}


void insertion(int arr[], int& size, int element, int index) {
    if (index < 0 || index > size) {
        cout << "Invalid index" << endl;
        return;
    }
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    size++;
}
void deletion(int arr[], int& size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index" << endl;
        return;
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void quick_sort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[right];
        int i = left - 1;
        for (int j = left; j < right; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[right]);
        int pivot_index = i + 1;
        quick_sort(arr, left, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, right);
    }
}

