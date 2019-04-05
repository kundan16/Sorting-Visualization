#include<iostream>
#include<graphics.h>
#include "ImpFunction.h"
#include "Bubblesort.h"
#include "Insertionsort.h"
#include "Mergesort.h"

using namespace std;

class Sorting
{
    private:
        int arrsize;
        int arr[1001];
    public:

        Sorting( int n);
        int getarrsize();
        int *getarray();
};
Sorting::Sorting( int n)
{
	arrsize = n;
	for(int i = 0; i< n; i++)
    {
        arr[i] = rand()%200;
    }
}
int Sorting::getarrsize()
{
	return arrsize;
}
int* Sorting::getarray()
{
	return arr;
}
//Main Function
int main()
{
    int gd=DETECT,gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int arraysize = 500;

   // Bubble sort

    Sorting Bsort(arraysize);

    Printsort(Bsort.getarray(), Bsort.getarrsize());
    setviewport(0,210,200,10,0);
    outtextxy(20,0,"Bubble Sort Visualization");

    bubblesort(Bsort.getarray(), Bsort.getarrsize());
    delay(50);
    cleardevice();

   // Insertion sort

    Sorting Isort(arraysize);

    Printsort(Isort.getarray(), Isort.getarrsize());
    setviewport(0,210,200,10,0);
    outtextxy(20,0,"Insertion Sort Visualization");

    insertionSort(Isort.getarray(), Isort.getarrsize());
    delay(50);
    cleardevice();

    //merge sort

    Sorting Msort(arraysize);

    Printsort(Msort.getarray(), Msort.getarrsize());
    setviewport(0,210,200,10,0);
    outtextxy(20,0,"Merge Sort Visualization");

    mergeSort(Msort.getarray(),0, Msort.getarrsize());
    delay(10);
    cleardevice();

    getch();
    closegraph();
    return 0;
}

