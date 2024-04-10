#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


double average_prime_numbers(int numbers[], int N) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (is_prime(numbers[i])) {
            sum += numbers[i];
            ++count;
        }
    }
    return (double)sum / count;
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }

    double average = average_prime_numbers(A, N);
    printf("%.3lf\n", average);

    return 0;
}
