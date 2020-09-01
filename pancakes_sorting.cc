#include <iostream>

#define ERROR (-1)

// Flip operation:
// https://www.youtube.com/watch?v=kk-_DDgoXfk
void flip(int array[], int n) {
	
    for (int start = 0; start < n; --n, ++start) {

		std::swap(array[start], array[n]);

    }
}

 int search(int arr[], int length, int n) {

	int index;

	for (int i = 0; i < length ; i++) {

		if (arr[i] == n)
			return i;

	}

	return ERROR;
}

void print_arr(int arr[],int length) {

  	for (int i = 0; i < length; i++) {

		std::cout << arr[i] << "\t";

	}
}

int main(void) {

	const int length = 6;
	int x = 0;

	int arr[length] = {1, 4, 2, 3, 6, 5};

	// Searching 5 in arr
	// sort_n[0] = the number
	// sort_n[1] = the index
	int sort_n[2] = {length, 0};

	while(x < length) {

		// Get index
		sort_n[1] = search(arr, length, (length-x));

		// One flip to put the number at the beginning
		flip(arr, sort_n[1]);
		// Another flip to put the top (where is the number)
		// To the end
		flip(arr, (length-1)-x);
		
		// Increase to change the number
		x++;

	}

	print_arr(arr, length);

	return 0;
}
