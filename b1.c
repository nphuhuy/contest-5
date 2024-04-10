#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    int evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if(A[i] % 2 == 0) {
            evenCount++;
            evenSum += A[i];
        } else {
            oddCount++;
            oddSum += A[i];
        }
    }

    printf("%d\n", evenCount);
    printf("%d\n", oddCount);
    printf("%d\n", evenSum);
    printf("%d\n", oddSum);

    return 0;
}
