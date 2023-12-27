#include <iostream>
#include <vector>

std::vector<int> countUniqueReceivers(const std::vector<std::pair<int, std::vector<int>>>& testCases) {
    std::vector<int> uniqueReceiverCount;

    for (const auto& testCase : testCases) {
        int N = testCase.first;
        const std::vector<int>& A = testCase.second;

        int maxVal = A[0];
        std::vector<bool> receivers(N, false);  // To track unique receivers

        for (int i = 1; i < N; ++i) {
            if (A[i] < maxVal) {
                receivers[i] = true;
            }
            maxVal = std::max(maxVal, A[i]);
        }

        int count = 0;
        for (bool receiver : receivers) {
            if (receiver) {
                count++;
            }
        }

        uniqueReceiverCount.push_back(count);
    }

    return uniqueReceiverCount;
}

int main() {
    int T;
    std::cin >> T;

    std::vector<std::pair<int, std::vector<int>>> testCases;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;

        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        testCases.push_back({N, A});
    }

    std::vector<int> output = countUniqueReceivers(testCases);

    for (int i : output) {
        std::cout << i << std::endl;
    }

    return 0;
}
