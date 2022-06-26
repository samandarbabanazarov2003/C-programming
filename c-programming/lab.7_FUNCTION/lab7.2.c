#include <stdio.h>






struct student
{
	int ID;
	char ism[21];
	char phone[15];
};

int main()
{	
	struct student  odil, muhammad;
	struct student students[3];

	for(int i = 0; i < 3; 
                   9
int isInRange(int min, int max, int x)
{
	return x >= min && x <= max;
}
int main()
{
	int min, max, x;

	scanf(" %d %d %d", &min, &max, &x);

	int orasidami = isInRange(min, max, x);i++)
	{
		scanf(" %d %s %s", &students[i].ID, students[i].ism, students[i].phone);
	}
	for(int i = 0; i < 3; i++)
	{
		printf(" %d %s %s\n", students[i].ID, students[i].ism, students[i].phone);
	}

	//boshqa varianti

	// scanf(" %d %s %s", &odil.ID, odil.ism, odil.phone);
	// scanf(" %d %s %s", &muhammad.ID, muhammad.ism, muhammad.phone);

	// printf(" %d %s %s\n", odil.ID, odil.ism, odil.phone);
	// printf(" %d %s %s\n", muhammad.ID, muhammad.ism, muhammad.phone);
	

	return 0;
}






int max1, max2;

void update(int x)
{
	max2 = x > max2 ? x : max2;
	max2 = x > max1 ? max1 : max2;
	max1 = x > max1 ? x : max1;
}

int main_9()
{
	int temp;

	scanf(" %d", &temp);

	max1 = max2 = temp;

	while(1)
	{

		scanf(" %d", &temp);

		if(temp == 0)
		{
			break;
		}

		update(temp);
	}

	printf("%d %d\n", max1, max2);
	return 0;
}