#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Block {
    int bottom, height, weight;
    Block(int a, int b, int c) {
        bottom = a;
        height = b;
        weight = c;
    }
    bool operator<(const Block &b) const {
        return bottom > b.bottom;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c, res;
    cin >> n;
    vector<Block> blocks;
    vector<int> dy(n);
    for (int i=0; i<n; i++) {
        cin >> a >> b >> c;
        blocks.push_back(Block(a, b, c));
    }
    sort(blocks.begin(), blocks.end());
    dy[0] = blocks[0].height;
    res = dy[0];
    for (int i=1; i<n; i++) {
        int mx = 0;
        for (int j=i-1; j>=0; j--) {
            if (blocks[j].weight>blocks[i].weight && dy[j]>mx) mx = dy[j]; 
        }
        dy[i] = mx + blocks[i].height;
        res = max(res, dy[i]);
    }
    cout << res;
    return 0;
}
