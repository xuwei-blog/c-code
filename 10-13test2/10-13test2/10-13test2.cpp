#include <stdio.h>


struct Book
{	
	char name[20];
	char id[20];
	int price;
		
};


int main()
{

	struct Book a = { "C”Ô—‘","S202121",7};
	printf("%s\n",a.name);
	printf("%s\n",a.id);
	printf("%d\n",a.price);
				
	return 0;
}