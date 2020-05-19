
%% PARCIAL CONTROL Y SISTEMAS
% Diseño de un filtro IIR. Diseñe un filtro digital tipo IIR Direct Form
% II con FilterDesigner.

% 1) Diseñe un filtro Chebyshev Tipo II pasa-banda entre 300 y 3.400 Hz
% de orden 2 con FilterDesigner.

% Dicho filtro se encuentra en el archivo 'doFilter.m'

% Cargar archivo con la señal a filtrar, donde se puede obtener la
% frecuencia de muestreo.
load('Tchaikovsky.mat');
% Reproducir señal para comprobar que no tiene errores
sound(signal(:, 1), Fs); pause(length(signal(:, 1))/Fs);
% Se considera como señal uno de los dos canales

%% 2) Aplique el filtrado al archivo Tchaikovsky.mat.
% Aplicación de filtro mediante función generada con filterDesigner
signal_f = doFilter(signal(:, 1));
% Reproducción de señal filtrada
sound(signal(:, 1), Fs);

%% 3) Grafique la respuesta en el tiempo de las señales original y
%filtrada y compare.
figure(1);
subplot(2, 1, 1);
plot(signal(:, 1), '-b');
subplot(2, 1, 2);
plot(signal_f, '-g');
