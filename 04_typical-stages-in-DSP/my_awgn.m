function signal_n = my_awgn(signal, snr)
var_noise = var(signal)*10^(-snr/10);
signal_n = signal + sqrt(var_noise)*randn(1, length(signal));
end