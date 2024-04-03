#include<stdio.h>
#include<math.h>
#include<limits.h>
          struct point{
                 int x,y;
              };
                                  int main(){
                                 int n,i,j,index_x;
                                  float d,avg;
                                   printf("enter the no of points:");
                                   scanf("%d",&n);
                                struct point p[n];
                                for(i=0;i<n;i++){
                              printf("[x  y]");
                           scanf("%d%d",&p[i].x,&p[i].y);
                               }
           float max=INT_MIN;
            for(i=0;i<n;i++){
                    d=0;
                    avg=0;
              
                 for(j=0;j<n;j++)
                 { d+=sqrt(pow((p[i].x-p[j].x),2)+pow((p[i].y-p[j].y),2));
               
                 }
                    avg=d/n;
                 printf("%f\n",avg);
                 if(max<avg)
                   { max=avg;
                  // printf("%f",max);
                      index_x=i;
                      }
                      }
                      printf("the farest point is:[%d %d]",p[index_x].x,p[index_x].y);
                      }
