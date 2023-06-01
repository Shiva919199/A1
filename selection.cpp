#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){

    int temp, min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout<<"\nSorted Array: ";
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
}
int main(){

    int n;
    cout<<"Selection sort"<<endl;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selection_sort(arr, n);

    return 0;
}
/*


#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){

    int temp, min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout<<"\nSorted Array: ";
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
}
int main(){

    int n=5;
    cout<<"Selection sort"<<endl;

    int arr[n]={5,4,2,1,7};
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selection_sort(arr, n);

    return 0;
}
*/