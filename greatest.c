#include <stdio.h>
int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x>=y && y>=z )
{
	printf("%d",x);
}
	
else if(y>=x && y>=z)
{
	printf("%d",y);
}

else(z>=x && z>=y)
{
	printf("%d",z);
}

return 0;

}
