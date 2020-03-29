//
// Created by ivaniuss on 3/28/20.
//


#ifndef SORTING_SORTING_H
#define SORTING_SORTING_H

#include <iostream>
#include <vector>
using namespace std;

class sorting {
private:
    vector<int> v1;

public:
    explicit sorting(vector<int>&);
    void InsertSort();
    void SelectionSort();
};


#endif //SORTING_SORTING_H
