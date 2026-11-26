#include <stdio.h>
#include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int target = n - m;
    double dp[25];
    memset(dp, 0, sizeof(dp));

    for (int k = target + 1; k <= n; k++) {
        double sum = 0.0;
        for (int i = target; i < k; i++) {
            sum += dp[i];
        }
        dp[k] = 1.0 + sum / (double)k;
    }

    printf("%.2f\n", dp[n]);

    return 0;
}
