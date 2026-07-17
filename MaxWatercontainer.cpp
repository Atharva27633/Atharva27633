#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxContainer(vector<int>& heights) {
    int lp = 0;
    int rp = heights.size() - 1;
    int maxWater = 0;

    while (lp < rp) {
        int w = rp - lp;
        int ht = min(heights[lp], heights[rp]);
        int currWater = w * ht;

        maxWater = max(maxWater, currWater);

        heights[lp] < heights[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main() {
    vector<int> heights = {1, 3, 6, 7, 8, 5, 9};

    int maxWater = maxContainer(heights);

    cout << "Max water stored = " << maxWater << endl;

    return 0;
}
