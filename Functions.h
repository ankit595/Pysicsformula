/*Header File*/
int force()
{
	int choice;
	float f,m,a;
	printf("\n\t\t1.Force\n\t\t2.Mass\n\t\t3.Acceleration\n\t\t: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter values of mass(kg)and acceleration(m/s^2) : ");
			scanf("%f%f",&m,&a);
			f=m*a;
			printf("Force : %.2f Newton or kg.m/s^2",f);
			break;
		case 2:
			printf("Enter values of force(Newton or kg.m/s^2) and acceleration(m/s^2) : ");
			scanf("%f%f",&f,&a);
			m=f/a;
			printf("Mass : %.2f kg",m);
			break;
		case 3:
			printf("Enter values of force(Newton or kg.m/s^2) and mass(kg) : ");
			scanf("%f%f",&f,&m);
			a=f/m;
			printf("Acceleration : %.2f m/s^2",a);
			break;
	}
		
}
int work()
{
	int choice;
	float f,w,d;
	printf("\n\t\t1.Work\n\t\t2.Force\n\t\t3.Displacement\n\t\t: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter values of force(Newton or kg.m/s^2) and displacement(m): ");
			scanf("%f%f",&f,&d);
			w=f*d;
			printf("Work : %.2f joule or kg.m^2/s^2",w);
			break;
		case 2:
			printf("Enter values of work(joule or kg.m^2/s^2) and displacement(m) : ");
			scanf("%f%f",&w,&d);
			f=w/d;
			printf("Force : %.2f Newton or kg.m/s^2",f);
			break;
		case 3:
			printf("Enter values of work(joule or kg.m^2/s^2) and force(Newton or kg.m/s^2) : ");
			scanf("%f%f",&w,&d);
			d=w/f;
			printf("Displacement : %.2f m",d);
			break;
	}
		
}
int power()
{
	int choice;
	float p,w,t;
	printf("\n\t\t1.Power\n\t\t2.Work\n\t\t3.Time\n\t\t: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter values of work(joule or kg.m^2/s^2) and time(s) : ");
			scanf("%f%f",&w,&t);
			p=w/t;
			printf("Power : %.2f watt or kg.m^2/s^3",p);
			break;
		case 2:
			printf("Enter values of power(watt or kg.m^2/s^3) and time(s) : ");
			scanf("%f%f",&p,&t);
			w=p*t;
			printf("Work : %.2f joule or kg.m^2/s^2",w);
			break;
		case 3:
			printf("Enter values of power(watt or kg.m^2/s^3) and work(joule or kg.m^2/s^2) : ");
			scanf("%f%f",&p,&w);
			t=w/p;
			printf("Time : %.2f s",t);
			break;
	}
		
}
int impulse()
{
	int choice;
	float i,f,t;
	printf("\n\t\t1.Impulse\n\t\t2.Force\n\t\t3.Time\n\t\t: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter values of force(Newton or kg.m/s^2) and time(s) : ");
			scanf("%f%f",&f,&t);
			i=f*t;
			printf("Impulse : %.2f kg.m/s",i);
			break;
		case 2:
			printf("Enter values of impulse(kg.m/s) and time(s) : ");
			scanf("%f%f",&i,&t);
			f=i/t;
			printf("Force : %.2f Newton or kg.m/s^2",f);
			break;
		case 3:
			printf("Enter values of impulse(kg.m/s) and force(Newton or kg.m/s^2) : ");
			scanf("%f%f",&i,&f);
			t=i/f;
			printf("Time : %.2f s",t);
			break;
	}
		
}
int momentum()
{
	int choice;
	float p,m,v;
	printf("\n\t\t1.Momentum\n\t\t2.Mass\n\t\t3.Velocity\n\t\t: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter values of mass(kg) and velocity(m/s) : ");
			scanf("%f%f",&m,&v);
			p=m*v;
			printf("Momentum : %.2f kg.m/s",p);
			break;
		case 2:
			printf("Enter values of momentum(kg.m/s) and velocity(m/s) : ");
			scanf("%f%f",&p,&v);
			m=p/v;
			printf("Mass : %.2f kg",m);
			break;
		case 3:
			printf("Enter values of momentum(kg.m/s) and mass(kg) : ");
			scanf("%f%f",&p,&m);
			v=p/m;
			printf("Velocity : %.2f m/s",v);
			break;
	}
		
}
