//http://stackoverflow.com/questions/11975214/quick-sort-code-explanation

#include <iostream>
using namespace std;


//pass in the array, start, end bounds
void quickSort(int arr[], int left, int right)
 {
//declare your pivot var
  int i = left, j = right;
  int tmp;
  int pivot = arr[abs((left + right) / 2)];
  cout << "pivot is " << pivot << endl;

  /* partition */
  while (i <= j) {
        while (arr[i] < pivot)
              i++;
        while (arr[j] > pivot)
              j--;
        if (i <= j) {
              cout<<"i and j are "<< i <<" " << j <<" and corresponding array value is "<< arr[i] <<" " << arr[j]<<endl;
        //swap
              tmp = arr[i];
              arr[i] = arr[j];
        //tmp
              arr[j] = tmp;
        //increment
              i++;
              j--;
              cout<<"entering first big while loop"<<endl;
         for(int i=0;i<7;i++)
            cout<<arr[i]<<" ";
    }
}
cout<<"recursion"<<endl;

/* recursion */
if (left < j)
    quickSort(arr, left, j);

if (i< right)
        quickSort(arr, i, right);
}

int main(){
    int arr[7]= {2,3,8,7,4,9,1};

    for(int i=0;i<7;i++)
        cout<<arr[i]<<" " ;
    int arrB[11] = {10,6,5,3,2,4,0,1,8,7,9};

    quickSort(arr,0,6);
    quickSort(arrB,0,10);
    for (auto i : arrB)
        cout << i << ",";
    cout<<endl;
    return 0;
}