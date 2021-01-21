#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int v1;
    int v2;
    int val;
    Edge(int a, int b, int c) {
        v1 = a;
        v2 = b;
        val = c;
    }
    bool operator<(Edge &b) {
        return val < b.val;
    }
};

int unf[101];

int Find(int v) {
    if (v==unf[v]) return v;
    else return unf[v] = Find(unf[v]);
}

void Union(int a, int b) {
    a = Find(a);
    b = Find(b);
    if (a!=b) unf[a] = b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v, e, i, a, b, c, sum = 0;
    vector<Edge> edges;
    cin >> v >> e;
    for (i=1; i<=v; i++) {
        unf[i] = i;
    }
    for (i=0; i<e; i++) {
        cin >> a >> b >> c;
        edges.push_back(Edge(a, b, c));
    }
    sort(edges.begin(), edges.end());
    for (i=0; i<e; i++) {
        int fa = Find(edges[i].v1);
        int fb = Find(edges[i].v2);
        if (fa!=fb) {
            sum += edges[i].val;
            Union(edges[i].v1, edges[i].v2);
        }
    }
    cout << sum;
    return 0;
}
