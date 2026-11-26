#include <cstdio>
#include <cstring>
#include <iomanip>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // target = number of remaining apples when we stop eating
    int target = n - m;

    // dp[k] = expected days to go from k remaining to target remaining
    double dp[25];
    memset(dp, 0, sizeof(dp));

    for (int k = target + 1; k <= n; k++) {
        double sum = 0.0;
        for (int i = target; i < k; i++) {
            sum += dp[i];
        }
        dp[k] = 1.0 + sum / (double)(k - target);
    }

    printf("%.2f\n", dp[n]);

    return 0;
}
