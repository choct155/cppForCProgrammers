// Placeholder for main application
// Adding another comment for effect

/*
Convert this program to C++
1. Change to C++ io
2. Change to one line comments
3. Change defines of constants to const
4. Change array to vector<>
5. Inline any short function
*/

#include <iostream>
#include <vector>
#include "point.h"
#include "math.h"
#include "utils.h"
#include "graph.h"
#include <string.h>

const int N = 40;

void sum(int *p, int n, std::vector<int> d) {
    int i;
    *p = 0;

    for (i = 0; i < n; ++i) {
        *p += d[i];
    }
}

int main() {
    // int i;
    // int accum = 0;
    // std::vector<int> data;

    // for (i = 0; i < N; ++i) {
    //     data[i] = i;
    //     sum(&accum, N, data);
    //     printf("sum is %d\n", accum);
    // }

    char* buffer = new char[8];
    memset(buffer, 5, 8);

    char** ptr = &buffer;

    delete [] buffer;

    Point p1 = Point(3, 2);
    Point p2 = Point(5, 4);
    Point p3 = p1 + p2;

    for (int x : testVector) {
        Log(x);
    }
    Log(averageScore(testVector));
    Log(averageScoreAccum(testVector));

    return 0;
}