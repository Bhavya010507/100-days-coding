#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int found = 0;
    int i_index = -1, j_index = -1;

    // Brute force search
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                i_index = i;
                j_index = j;
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        printf("%d %d\n", i_index, j_index);
    } else {
        printf("-1 -1\n");
    }

    return 0;
}