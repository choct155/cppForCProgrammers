#include <vector>
#include <numeric>

double averageScore(const std::vector<int>& scores) {
    int sum = 0;
    double n = (double)scores.size();

    for (int score : scores) {
        sum += score;
    }

    return sum / n;
}

double averageScoreAccum(const std::vector<int>& scores) {
    int sum = std::accumulate(scores.begin(), scores.cend(), 0);
    double n = (double)scores.size();
    return sum / n;
}

// Need to come back to this. There is something wonky about getting the execution library to work
// double averageScoreReduce(const std::vector<int>& scores) {
//     int sum = std::reduce(scores.cbegin(), scores.cend(), 0);
//     double n = (double)scores.size();
//     return sum / n;
// }