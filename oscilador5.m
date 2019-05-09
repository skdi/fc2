clear,clf;
n=0;h=0.001;
k=1;m=2;b=4;F=0.1;w=0.5;
t=0;tfin=30;x=1;v=0;a=-k/m*x;
pt(1)=t;px(1)=x;pv(1)=v;pa(1)=a;

for t=0:h:tfin
	
	n=n+1;
	a=-k/m*x-b/m*v;
	v=v+a*h;
	x=x+v*h;
	
	pt(n+1)=t;
	px(n+1)=x;
	pv(n+1)=v;
	pa(n+1)=a;

end
n=0;
t=0;x=1;v=0;a=-k/m*x;
ptf(1)=t;pxf(1)=x;pvf(1)=v;paf(1)=a;
for t=0:h:tfin
	
	n=n+1;
	a=-k/m*x-b/m*v+F/m*cos(w*t);
	v=v+a*h;
	x=x+v*h;
	
	ptf(n+1)=t;
	pxf(n+1)=x;
	pvf(n+1)=v;
	paf(n+1)=a;

end
plot(pt,px,ptf,pxf), grid on