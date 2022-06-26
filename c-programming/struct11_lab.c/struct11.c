#include <stdio.h>

struct beauty
{
    int vazn,boy,jins;
};

int main()
{
 int n,a;
 scanf(" %d",&n);
 struct beauty x[n];
 int bir=0,ikki=0,uch=0;
 for(int i=0;i<n;i++)
 {
     scanf("%d %d %d",&x[i].jins,&x[i].vazn,&x[i].boy);
  if(x[i].jins==1)
    {
     if(x[i].vazn<60 && x[i].boy<165) bir++;
     else if(60<=x[i].vazn && 70>x[i].vazn && 165<=x[i].boy && x[i].boy<175) bir++;
     else if(70<=x[i].vazn && 175<=x[i].boy) bir++;

     if(x[i].vazn>=70 && x[i].boy<165) ikki++;
     else if (60>=x[i].vazn && 165<=x[i].vazn && 175>x[i].boy) ikki++;
     else if(60<=x[i].vazn && x[i].vazn<70 && 175<=x[i].boy) ikki++;
     
     if(x[i].vazn>=60 && x[i].vazn<70 && x[i].boy<165) uch++;
     else if(70<=x[i].vazn && 165<=x[i].boy && x[i].boy<175) uch++;
     else if(60>x[i].vazn && 175<=x[i].boy) uch++;
       printf("%d %d %d",bir,ikki,uch);
    } 
    if(x[i].jins==2)
    {
     if(x[i].vazn<50 && x[i].boy<165) bir++;
     else if(50<=x[i].vazn && 60>x[i].vazn && 165<=x[i].boy && x[i].boy<175) bir++;
     else if(60<=x[i].vazn && 175<=x[i].boy) bir++;

     if(x[i].vazn>=60  && x[i].boy<165) ikki++;
     else if (50>x[i].vazn && 165<=x[i].boy && 175>x[i].boy) ikki++;
     else if(50<=x[i].vazn && x[i].vazn<60 && 175<=x[i].boy) ikki++;
     
     if(x[i].vazn>=50 && x[i].vazn<60 && x[i].boy<165) uch++;
     else if(60<=x[i].vazn && 165<=x[i].boy && x[i].boy<175) uch++;
     else if(50>x[i].vazn && 175<=x[i].boy) uch++;
       printf("%d %d %d\n",bir,ikki,uch);
    } 
 }
return 0;
}