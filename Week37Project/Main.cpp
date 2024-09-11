#include <iostream>
#include <vector>
void ArrayPrint(std::vector<int> arr);
int ArraySumUpTo(std::vector<int> arr, int upTo);
int ArraySum(std::vector<int> arr);

int main() {
	
	std::vector<int> arr = { 1, 1, 1, 1, 1 };
	std::cout << "Trye size of array: 5" << std::endl << "Calculated size: " << arr.size() << std::endl;
	std::cout << ArraySum(arr) << std::endl;
	ArrayPrint(arr);
}

/*
* Prints out all elements in an array.
*/
void ArrayPrint(std::vector<int> arr) {
	for (int i : arr){
		std::cout << arr[i] << std::endl;
	}
}

/*
* Function iterates through an array, and sums the values until the sum is greater than or equal to the upTo value.
* Function starts iterating at arr[0] and increments by 1.
*/
int ArraySumUpTo(std::vector<int> arr, int upTo) {
	//TODO
	return 0;
}

/*
* Function which loops through an array of any size and returns the sum of all the elements in the array
* 
* Hint: check out "foreach" loops
*/
int ArraySum(std::vector<int> arr) {
	int sum = 0;
	for (int i : arr) {
		sum += arr[i];
	}
	return sum;
}