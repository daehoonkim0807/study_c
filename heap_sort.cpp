//Heapsort in place : in C++

#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i which is
// an index in index[]. n is size of heap
void heapify(int index[], int n, int i)
{
    int max = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && index[l] > index[max])
        max = l;

    // If right child is larger than largest so far
    if (r < n && index[r] > index[max])
        max = r;

    // If largest is not root
    if (max != i)
    {
        swap(index[i], index[max]);

        // Recursively heapify the affected sub-tree
        heapify(index, n, max);
    }
}

// main function to do heap sort
void heapSort(int index[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(index, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(index[0], index[i]);

        // call max heapify on the reduced heap
        heapify(index, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int index[], int n)
{
    for (int i=0; i<n; ++i)
        cout << index[i] << " ";
    cout << "\n";
}

// Driver program
int main()
{

    int index[]={-2,3,45,12,15,22,46,78,699,9,0};

    int n = sizeof(index)/sizeof(index[0]);
    cout << "Unsorted array is \n";

    printArray(index, n);

    heapSort(index, n);

    cout << "Sorted array is \n";
    printArray(index, n);
}
/*
I'm attaching the output which the solution .

Runing time of inplace heapsort :

Time complexity of heapify is O(logn)

Create and build heap is O(1)

total time complexity os O(logn)

time complexity without inplace algorithm is : O(nlogn) is best and average case and in worst case it is O(1) if there is only one element . Then no need to sort

*/