#include <iostream>
using namespace std;


//constant time complexity


void printElement(int arr[],int n){          //since only one operation is being performed so time complexity is Big O of 1 (O(1))
    cout<<arr[n]<<endl;
}

// int main(){
//     int arr[]={5,10,12,13,15};
//     printElement(arr,3);
//     return 0;
//     cout<<" "<<endl;
// }


// Linear time complexity


void printAll(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// int main(){
//     int arr[]={1,2,3,4,5};
//     printAll(arr,4);
//     return 0;
// } 


//Quadric time complexity


void printPairs(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"(" <<arr[i]<<" ,"<<arr[j]<<")";      //since nested loops so time complexity is O(n^2)
        }
    cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3};
    printPairs(arr,3);
    return 0;
}