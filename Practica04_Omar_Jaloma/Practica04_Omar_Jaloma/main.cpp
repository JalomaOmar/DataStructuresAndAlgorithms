#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 10000
using namespace std;

void BubbleSort(int*, int);
void SelectionSort(int*, int);
void InsertionSort(int*, int);
void printArr(int*, int);

int main()
{   //INSERTION SORT
    /*unsigned t0, t1;
    int arr[N];
    for(int k=0; k<N; k++){
        arr[k]=rand();
    }
    //printArr(arr, N);
    t0=clock();
    InsertionSort(arr, N);
    t1=clock();
    //printArr(arr, N);
    double time=((double)(t1-t0)/CLOCKS_PER_SEC);
    cout<<"Tiempo de ejecucion: "<<time;*/

    //BUBBLE SORT
    /*unsigned t2, t3;
    int arr2[N];
    for(int k=0; k<N; k++){
        arr2[k]=rand();
    }
    printArr(arr2, N);
    t2=clock();
    SelectionSort(arr2, N);
    t3=clock();
    printArr(arr2, N);
    double time2=((double)(t3-t2)/CLOCKS_PER_SEC);
    cout<<"Tiempo de ejecucion: "<<time2;*/

    //BUBBLE SORT
    /*unsigned t4, t5;
    int arr3[N];
    for(int k=0; k<N; k++){
        arr3[k]=rand();
    }
    printArr(arr3, N);
    t4=clock();
    BubbleSort(arr3, N);
    t5=clock();
    printArr(arr3, N);
    double time3=((double)(t5-t4)/CLOCKS_PER_SEC);
    cout<<"Tiempo de ejecucion: "<<time3;*/
    return 0;
}

void BubbleSort(int* A, int n){
     for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                int aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
            }
        }
     }
}
void SelectionSort(int* A, int n){
     for(int i=0; i<n-1; i++){
        int smallest=i;
        for(int j=i+1; j<n; j++){
            if(A[j]<A[smallest]){
                smallest=j;
            }
        }
        int aux=A[i];
        A[i]=A[smallest];
        A[smallest]=aux;
     }
}

void InsertionSort(int* A, int n){
     for(int j=1; j<n; j++){
        int key=A[j];
        int i=j-1;
        while(i>=0 && A[i]>key){
            A[i+1]=A[i];
            i--;
            A[i+1]=key;
        }
     }
}

void printArr(int *A, int n){
    for(int i=0; i<n; i++){
        if(i==0){
            cout<<"|";
        }
        cout<<A[i]<<"|";
        if(i==n-1){
            cout<<endl;
        }
    }
}
