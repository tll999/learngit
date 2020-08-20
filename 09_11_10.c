#include <stdio.h>

void to_base_n(int i,int j);
int main()
{
	int a,b;
	printf("please input two numbers,"
	"the second one is between 2 and 10\n");
	while(scanf("%d %d",&a,&b)==2)
	{
		if(b>=2 && b<=10)
		{
			
			to_base_n(a,b);
		}
		else
			printf("the second number should"
			"be between 2 and 10\n");

		printf("\nplease input two numbers,"
			"the second one is between 2 and 10\n");
	}

	printf("byebye\n");

}

void to_base_n(int i,int j)
{
	if(i>=j)
		to_base_n(i/j,j);
	printf("%d ",i%j);
}
