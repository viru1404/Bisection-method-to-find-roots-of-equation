#include<stdio.h>
#include<conio.h>
int arr[1000]={0};
int degree;
float fun(int x)
{
	//printf("%d\n",arr[2]);
	float result=0,dif=1;
	for(int i=0;i<degree;i++)
	{
		dif*=x;
	}
	for(int i=0;i<degree+1;i++)
	{
		
		result+=arr[i]*dif;
		dif=dif/x;
	}
	return result;
}

float fun(float x)
{
   	float result=0,dif=1;
	for(int i=0;i<degree;i++)
	{
		dif*=x;
	}
	for(int i=0;i<degree+1;i++)
	{
		
		result+=arr[i]*dif;
		dif=dif/x;
	}
	return result;
}

int main()
{
	
	printf("Enter order\n");
	scanf("%d",&degree);
	printf("Enter coeficients\n");
	for(int i=0;i<degree+1;i++)
	{
		scanf("%d",&arr[i]);
		//printf("%d\n",arr[i]);
	}
	float a=0,b=0;
	
	for(int i=0;;i++)
	{
		if((fun(i)>=0&&fun(a)<0)||((fun(i)<=0&&fun(a)>0)))
		{
			b=i;
			break;
		}
		else
		{
			a=i;
		}
	}
	printf("%f  %f\n",a,b);
	
	float xvalue,avg;
	xvalue=(a+b)/2;
	avg=(a+b)/2;
	
	while(1)
	{
		
		if(((fun(avg)>=0&&fun(a)<0)||((fun(avg)<=0&&fun(a)>0))))
		{
			b=avg;
		}
		else
		{
			a=avg;
		}
		avg=(a+b)/2;
		if(xvalue==avg)
		{
			printf("%f ",xvalue);
			break;
		}
		xvalue=avg;
	}
	getch();
	return 0;
	
}
