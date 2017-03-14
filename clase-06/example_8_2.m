clc
clear
close all


%'K' and 'a' values to test
K = 2:0.2:6; % [2.0 2.2 2.4 2.6 2.8 3.0];
a = 0.5:0.2:5; %[0.5 0.7 0.9 1.1 1.3 1.5];
% Evaluate closed-loop unit-step response at each 'K' and 'a' combination
% that will yield the maximum overshoot less than 10%
t = 0:0.01:5;

g = tf([1.2],[0.36 1.86 2.5 1]);

k = 0;

MK = max(size(K));
MA = max(size(a));

solution = zeros(MK*MA, 3);

for i = 1:MK;
    for j = 1:MA;
        
        gc = tf(K(i)*[1 2*a(j) a(j)^2], [1 0]); % controller
        G = gc * g / (1 + gc*g); % closed-loop transfer function
        y = step(G,t);
        m = max(y);
        k = k+1;
%         if m < 1.10            
            solution(k,:) = [K(i) a(j) m];
%         end
    end
end

[f,~] = find ( min(solution(:,3)) );

SOL = solution(f,1:2)

solution % Print solution table