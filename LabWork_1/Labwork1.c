#include <stdio.h>

// Function to display the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at the beginning
void insertAtBeginning(int arr[], int *n, int element, int capacity) {
    if (*n == capacity) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }
    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    (*n)++;
}

// Function to insert an element at the end
void insertAtEnd(int arr[], int *n, int element, int capacity) {
    if (*n == capacity) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }
    arr[*n] = element;
    (*n)++;
}

// Function to insert an element at a specific position
void insertAtPosition(int arr[], int *n, int position, int element, int capacity) {
    if (*n == capacity) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }
    if (position < 0 || position > *n) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*n)++;
}

// Function to delete the first element
void deleteFirstElement(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }
    for (int i = 0; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

// Function to delete the last element
void deleteLastElement(int arr[], int *n) {
    if (*n == 0) {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }
    (*n)--;
}

// Function to delete an element at a specific position
void deleteAtPosition(int arr[], int *n, int position) {
    if (position < 0 || position >= *n) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

// Function to search for an element using linear search
void searchElement(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Element found at index: %d\n", i);
            return;
        }
    }
    printf("Element not found.\n");
}

// Function to sort the array
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort elements at even indices
void sortEvenIndices(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort elements at odd indices
void sortOddIndices(int arr[], int n) {
    for (int i = 1; i < n; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort elements that are even in value
void sortEvenValues(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort elements that are odd in value
void sortOddValues(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] % 2 != 0 && arr[j] % 2 != 0 && arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, capacity;
    printf("Enter the size of the array: ");
    scanf("%d", &capacity);

    int arr[capacity];

    printf("Enter the number of elements initially: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    displayArray(arr, n);

    // Insert operations
    int number;
    printf("Enter the number to insert in the beginning : ");
    scanf("%d",&number);
    insertAtBeginning(arr, &n, number, capacity);
    printf("After inserting %d at the beginning: ", number);
    displayArray(arr, n);
    
    int number2;
    printf("Enter the number to insert at the end : ");
    scanf("%d",&number2);
    insertAtEnd(arr, &n, number2, capacity);
    printf("After inserting %d at the end: ",number2);
    displayArray(arr, n);
    
    int number3;
    printf("Enter the position to place the element : ");
    scanf("%d",&number3 );
    insertAtPosition(arr, &n,number3-1, 30, capacity);
    printf("After inserting 30 at position %d: ",number3);
    displayArray(arr, n);

    // Delete operations
    deleteAtPosition(arr, &n, number3-1);
    printf("After deleting the element at position %d: ",number3);
    displayArray(arr, n);
    
    deleteFirstElement(arr, &n);
    printf("After deleting the first element: ");
    displayArray(arr, n);

    deleteLastElement(arr, &n);
    printf("After deleting the last element: ");
    displayArray(arr, n);

    // Search operation
    int number4;
    printf("Enter the number to find : ");
    scanf("%d",&number4 );
    searchElement(arr, n,number4 );

    // Sorting operations
    sortArray(arr, n);
    printf("After sorting the array: ");
    displayArray(arr, n);

    sortEvenIndices(arr, n);
    printf("After sorting elements at even indices: ");
    displayArray(arr, n);

    sortOddIndices(arr, n);
    printf("After sorting elements at odd indices: ");
    displayArray(arr, n);

    sortEvenValues(arr, n);
    printf("After sorting even values: ");
    displayArray(arr, n);

    sortOddValues(arr, n);
    printf("After sorting odd values: ");
    displayArray(arr, n);

    return 0;
}
