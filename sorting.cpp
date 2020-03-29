//
// Created by ivaniuss on 3/28/20.
//

#include "sorting.h"

sorting::sorting(vector<int> &v){
    cout<< __PRETTY_FUNCTION__<<endl;


    for (const auto &i : v)
        v1.emplace_back(i);



}

void sorting::InsertSort() {
    cout<< __PRETTY_FUNCTION__<<endl;

    int k = 0;
    int j = 0;
    for (int i = 1; i < v1.size() ; ++i) {

        k = v1[i];
        j = i - 1;
        while (j >= 0 && v1[j] > k){
            v1[j+1] = v1[j];
            j -=1;
        }
        v1[j+1] = k;

    }
    for ( auto &i : v1)
        cout << i << " ";
    cout << endl;

}

void sorting::SelectionSort() {

    cout<< __PRETTY_FUNCTION__<<endl;

    int min  = 0;

    for (int i = 0; i < v1.size() - 1 ; ++i) {
        min  = i;
        for (int j = i+ 1; j < v1.size(); ++j) {
            if (v1[j] < v1[min]){
                min = j;
            }
            if (min!= i){
                swap(v1[min], v1[i]);
        }

        }
    }
    for ( auto &i : v1)
        cout << i << " ";
    cout << endl;
}

void sorting::BubbleSort() {


    cout<< __PRETTY_FUNCTION__<<endl;


    int n;
    int x;
    bool swapped;
    n = v1.size();
    swapped = true;
    x = -1;

    while (swapped){
        swapped = false;
        x = x + 1;
        for (int i = 1; i < n - x ; ++i) {
            if (v1[i - 1] > v1[i]){
                swap(v1[i-1],v1[i]);
                swapped = true;
            }
            
        }
    }

    for ( auto &i : v1)
        cout << i << " ";
    cout << endl;

}
