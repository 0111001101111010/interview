#include <iostream>
#include <array>
//stuff

void printLots(std::string phrase, int n){
	std::cout << n << " " << phrase << "\n";
	if (n != 1)
		printLots(phrase,n-1);
};

int factorial(int n){

return (n != 1)? n*factorial(n-1) : n*1;
}
//quick sort
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
//woot
struct Node {
	Node();
	int value = -1;
	Node * left_ptr = NULL;
	Node * right_ptr = NULL;
};

int main(int argc, char const *argv[]){
//	binary_tree root;
//	root.insert("stuff");
// recurse me scotty

//basic print me x times!
	printLots("shit", 10);
	printLots("friend",1);
//factorial
	//base case breaks the rule
	//breaking down into multiple problems
	//double recursion
	//can it be divided and conquored
	std::cout<<factorial(3);
//std::array<int, 7> stuff = {123,23,123,12,42,5,3};
int stuff[7] = {123,23,123,12,42,5,3};

quickSort(stuff,3,123);
std::cout <<"uhhh\n";
for (auto x : stuff)
	 std::cout << x << ",";
	//woot

	return 0;
	}