#include <iostream>
#include "../Header/QuickSort.h"
#include "../Header/Rating.h"
#include "../Header/Analysis.h"

using namespace std;

Analysis QuickSort::sort(int v[], int size){
    this->sort(v, 0, size-1);
}

void QuickSort::sort(int v[], int low, int high){  //Params: Array, lowest index, highest index (n-1)
    if(low < high){
        int rightPos = partition(v, low, high);
        this->sort(v, low, rightPos-1);
        this->sort(v, rightPos+1, high);
    }
}

/**
 *
 * @param v
 * @param low
 * @param high
 * @return
 */
int QuickSort::partition(int v[], int low, int high){
    int pivot = v[high];
    int i = low - 1;
    for(int j = low; j <= high-1; j++){
        if(v[j] <= pivot){
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i+1], v[high]);
    return(i+1);
}

void QuickSort::sortRatings(Rating vr[], int low, int high){

    if(low < high){
        int rightPos = partitionRatings(vr, low, high);
        this->sortRatings(vr, low, rightPos-1);
        this->sortRatings(vr, rightPos+1, high);
    }


}

/**
 *
 * @param vr
 * @param low
 * @param high
 * @return
 */
int QuickSort::partitionRatings(Rating vr[], int low, int high){
    Rating pivot = vr[high];
    int i = low - 1;
    for(int j = low; j <= high-1; j++){

        if(vr[j].USERID <= pivot.USERID){
            i++;
            swap(vr[i], vr[j]);
        }

    }
    swap(vr[i+1], vr[high]);

    return(i+1);

}