#include <stdio.h>

int main()
{
	int *p = NULL;

	if(p == NULL)
	{
		int x = 5;
		p = &x;
	}

	printf("%d %p\n", *p, p);
	int a = 6;
	p = &a;

	return 0;
}

int main_4()
{	
	int x[5];

	for(int *p = x; p <= (x + 4); p++)
	{
		scanf(" %d", p);
	}

	int *p;
	for(p = x; p < (x + 5); p++)
	{
		printf("%d ", *p);
	}
	--p;
	printf("%d %p", *p, p);



	return 0;
}


int main_3()
{
	int *p, x = 5, x1 = 6;

	p = &x;
	printf("%d\n", *p);

	p = &x1;
	printf("%d\n", *p);

	p = NULL;
	printf("%p\n", p);

  struct City
  {
    char city[21];
    float lat;
    float world;
  };

  typedef struct City city;

  int main()
  {
      int n;
      scanf("%d",&n);
      city c[n];

      for(int i=0;i<3;i++)
      {
        scanf("%s %f %f",c[i].city,&c[i].lat,&c[i].world);
      }

      float max_k=c[0].lat;
      float min if(strlen(ochiqTekst) < 4){
   return ochiqTekst;
  }
  for(int i=0; i<strlen(ochiqTekst)-5; i++){
    ochiqTekst[i] = '#';
  }
  return ochiqTekst;=0;i<3;i++)
      {
            if(max_k<c[i].lat)
            {   
                max_k=c[i].lat;
                a=i;
            }
      }
        print if(strlen(ochiqTekst) < 4){
   return ochiqTekst;
  }
  for(int i=0; i<strlen(ochiqTekst)-5; i++){
    ochiqTekst[i] = '#';
  }
  return ochiqTekst;
        int b=0;
        for(int i=0;i<3;i++)
        {
            if(min_u>c[i].world)
        {
          min_u=c[i].world;
          b=i;
        }
        
      }
        printf(" %s\n",c[b].city);
     
      return 0;
  }


	*y = temp;
}

int main_2()
{
	int a = 5, b = 7;

	swap(&a, &b);

	printf("%d %d\n", a, b);

	return 0;
}

int main_1(void) 
{
	int *p, x = 5;
	p = &x;
	*p = 8;

	printf("%d %p\n", x, &x);
	printf("%d %p\n", *p, &p);

	return 0;
}