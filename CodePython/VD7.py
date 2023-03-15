def convolve(signal, kernel):
    signal_length = len(signal)
    kernel_length = len(kernel)
    result_length = signal_length + kernel_length - 1
    result = [0] * result_length
    for i in range(result_length):
        for j in range(kernel_length):
            if i - j >= 0 and i - j < signal_length:
                result[i] += signal[i - j] * kernel[j]
    return result

signal = [1, 2, 3, 4, 5]
kernel = [0.5, 0.25, 0.125]
result = convolve(signal, kernel)
print(result)