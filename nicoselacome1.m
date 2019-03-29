clear all %limpia todo
m=1;  % Definicion de constantes
k=1;
t(1)=0;   % Valores iniciales
v(1)=0;
x(1)=1;
delta=0.005;  % Intervalos de tiempo
%fprintf('Posicion Velocidad Aceleracion\n'); 
for i=1:5000
	a(i)=-k*x(i)/m;
	x(i+1)=x(i)+v(i)*delta;
	v(i+1)=v(i)+a(i)*delta;
	t(i)=i;
%	fprintf('%f %f %f\n',x(i),v(i),a(i));
end
plot(t(1:5000),x(1:5000)); % Graficar la posicion y el tiempo de 1 hasta 5000
grid on; % Activa la rejilla


clear all %limpia todo
m=1;  % Definicion de constantes
k=1;
F0=5;
gamma=0.5;
w0=2;
t(1)=0;   % Valores iniciales
v(1)=0;
x(1)=1;
delta=0.005;  % Intervalos de tiempo
A=abs((-F0/m)/sqrt(pow(pow(w0,2)-pow(w,2),2)+(pow(gamma*w,2))))
