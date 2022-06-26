#include <stdio.h>
#include <string.h>

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
      float min_u=c[0].world;
      int a=0;

      for(int i=0;i<3;i++)
      {
            if(max_k<c[i].lat)
            {   
                max_k=c[i].lat;
                a=i;
            }
      }
        printf("%s ",c[a].city);   



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

