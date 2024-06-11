#include <iostream.h>
#include <conio.h>


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
	for (int j = 0; j < size - i - 1; ++j) {
	    if (arr[j] > arr[j + 1]) {
		swap(arr[j], arr[j + 1]);
	    }
	}
    }
}

int main() {
    int arr[100], size;
    int oddNumbers[100], evenNumbers[100];
    int oddCount = 0, evenCount = 0;


    clrscr();

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter the elements: ";
    for (int  i = 0; i < size; ++i) {
	cin >> arr[i];
    }


    for ( i = 0; i < size; ++i) {
	if (arr[i] % 2 == 0) {
	    evenNumbers[evenCount++] = arr[i];
	} else {
	    oddNumbers[oddCount++] = arr[i];
	}
    }

    sort(oddNumbers, oddCount);
    sort(evenNumbers, evenCount);

    int index = 0;


    for ( i = 0; i < oddCount; ++i) {
	arr[index++] = oddNumbers[i];
    }
    for ( i = 0; i < evenCount; ++i) {
	arr[index++] = evenNumbers[i];
    }

    cout << "Sorted array: ";
    for (i = 0; i < size; ++i) {
	cout << arr[i] << " ";
    }

    getch();
    return 0;
}
