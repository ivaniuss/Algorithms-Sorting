//
// Created by ivaniuss on 3/29/20.
//

#include <iostream>
#include <vector>
#include "sorting.h"
using namespace std;
using std::cout;
using std::endl;
using std::vector;

int main(int, char*[]){

    vector<int> v{5,6,1,8,3,6,8,5,2,7,9,3,9,12,8};

    sorting s1{v};
    s1.SelectionSort();
    return 0;
}
