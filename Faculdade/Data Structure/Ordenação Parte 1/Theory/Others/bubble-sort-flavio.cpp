#include <iostream>
using namespace std;

//código desenvolvido pelo Flávio Almeida
void printArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << i << ": " << arr [i] << endl;
  }
}

void PrintEmptyLine() {
  cout << " " << endl;
}

void bubbleSort(int arr[], int size, string order = "cresc") {
  int i, j;
  bool isOrdered, isError;

  if (order == "cresc") {
    isOrdered = true;
  } else if (order == "dec") {
    isOrdered = false;
  } else {
    isError = true;
  }

  if (isError) {
    cout << "Error: invalid order." << endl;
  } else {
    for (i = 0; i < size -1; ++i) {
      for (j = i + 1; j < size; ++j) {
        bool firstIsBigger = arr[i] > arr[j];
        bool secondIsBigger = !firstIsBigger;
        bool rightOrder = isOrdered ? firstIsBigger : secondIsBigger;

        if(rightOrder) {
          swap(arr[i], arr[j]);;
        }
      }
    }
  }
}

int main() {
  int arr [] = {20, 10, 50, 30, 40};
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  cout << "Array not sorted" << endl;
  printArray(arr, arrSize);

  PrintEmptyLine();

  bubbleSort(arr, arrSize, "a");

  cout << "Array sorted" << endl;
  printArray(arr, arrSize);

  return 0;
}