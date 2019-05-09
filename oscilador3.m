clear,clf;
n=0;
dt=0.001;
k=1;m=2;b=0.1;F=1;w=0.5;
t0=0;tfinal=60;
x=1;v=0;
a=-k/m*x;
pt(1)=t0;px(1)=x;
pv(1)=v;pa(1)=a;

for t0=0:dt:tfinal
	
	n=n+1;
	a=-k/m*x-b/m*v+F/m*cos(w*t0);
	v=v+a*dt;
	x=x+v*dt;
	
	pt(n+1)=t0;
	px(n+1)=x;
	pv(n+1)=v;
	pa(n+1)=a;

end

subplot(2,2,1),plot(pt,px,pt,0.05*sin(w*pt)),xlabel('t (s)'),ylabel('x (m)'),title('Posicion vs Tiempo'),grid on;
subplot(2,2,2),plot(pt,pv,pt,0.1*sin(w*pt)),xlabel('t (s)'),ylabel('v (m/s)'),title('Velocidad vs Tiempo'),grid on;
subplot(2,2,3),plot(pt,pa,pt,0.5*sin(w*pt)),xlabel('t (s)'),ylabel('a (m/s^2)'),title('Aceleracion vs Tiempo'),grid on;
subplot(2,2,4),plot(px,pv),xlabel('x (m)'),ylabel('v (m/s)'),title('Velocidad vs Posicion'),grid on;
