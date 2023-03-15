#include <stdio.h>

void convolve(double signal[], int signal_length, double kernel[], int kernel_length, double result[]) {
    int result_length = signal_length + kernel_length - 1;
    for (int i = 0; i < result_length; i++) {
        result[i] = 0;
        for (int j = 0; j < kernel_length; j++) {
            if (i - j >= 0 && i - j < signal_length) {
                result[i] += signal[i - j] * kernel[j];
            }
        }
    }
}

int main() {
    double signal[] = {1, 2, 3, 4, 5};
    int signal_length = 5;
    double kernel[] = {0.5, 0.25, 0.125};
    int kernel_length = 3;
    double result[7];
    convolve(signal, signal_length, kernel, kernel_length, result);
    for (int i = 0; i < 7; i++) {
        printf("%f ", result[i]);
    }
    return 0;
}
