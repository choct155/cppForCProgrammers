#include <vector>
int sum(std::vector<int> v, int agg) {
    if (v.empty()) {
        return agg;
    } else {
        int next = v.front();
        std::vector<int> rest = std::vector<int>(v.begin()+1, v.end());
        int newAgg = next + agg;
        return sum(rest, newAgg);
    }
}


/*

def sum(xs: Seq[Int], agg: Int = 0) -> Int:
    if (len(xs) == 0):
        return agg
    else:
        next = xs[0]
        rest = xs[1:]
        newAgg = next + agg
        return sum(rest, newAgg)

*/
// Wouldn't you like to know?
// [1,2,3,4,5]
// (1, (2, (3, (4, (5, Nil)))))
// head: 1
// tail:  (2, (3, (4, (5, Nil))))



// so for this exercise, we will have to make use of the iterator you discovered, it traverse the vector
// we will also have to reference subsections of the vector

