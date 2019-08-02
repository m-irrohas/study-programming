#include <cstdio>

using namespace std;

int a[MAX_N];
int n, k;

bool dfs(int i, int sum) {
    if (i==n) return sum == k;

    if (dfs(i+1, sum)) return true;
    if (dfs(i+1, sum+a[i])) return true;

    return false;
}