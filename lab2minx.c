#include<stdio.h>
int main()
{
	int var1;
	int var2;
	scanf("%d",&var1);
	scanf("%d",&var2);
	if (var1 > var2) {
		printf("var1 is greather than var2");
		printf("\n%d",(var1-var2));
	}else {
		printf("var2 is greather than var1");
		printf("\n%d",(var2-var1));
	}
}
	
