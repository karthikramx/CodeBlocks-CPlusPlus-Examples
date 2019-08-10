#include <iostream>

using namespace std;


//overloaded function 1
void printArray(int arr[],int start,int sizeOfArray)
{

    if(start >= sizeOfArray)
        return;
    cout << arr[start] << endl;
    printArray(arr,start+1,sizeOfArray);
}

//overloaded function 2
void printArray(int theArray[], int sizeOfArray){
    for(int x=0; x<sizeOfArray;x++)
    {
        cout << theArray[x] << endl;
    }
}

int main()
{
    //example of recursion and arrays
    int arr[5] = {1,2,3,4,5};
    printArray(arr,0,sizeof(arr)/sizeof(int));

    //example of array and summing its elements
    int tuna[5] = {20,33,44,55,66};
    int sum = 0;
    for(int x = 0; x < sizeof(tuna)/sizeof(int); x++){
        sum +=tuna[x];
        cout << sum << endl;
        }

    //passing arrays to functions
    int karthik[3] = {20,30,40};
    int jessica[6] = {1,2,3,4,5,6};

    printArray(karthik,3);


    //multidimensional arrays
    //row and cols always
    int sally[2][3] ={{2,3,4},{8,9,10}};
    cout << sally[0][2] << endl;

    //printing a multi-dimensional array
    int bertha[2][3] = {{1,2,3},{7,8,9}};

    for(int row = 0;row<2;row++){
        for(int col=0;col<3;col++)
        {
           cout << bertha[row][col] << " ";
        }
        cout << endl;
    }

    return 0;

}
