#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    int year,month,day,hour,minitus,second;
}date;

int main() {

    int n;
    scanf("%d",&n);
    date d[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d %d\n",&d[i].year,&d[i].month,&d[i].day,&d[i].hour,&d[i].minitus,&d[i].second);
    }
    printf("%d\n",n);
         for(int i=0;i<n;i++)
    {
     for(int j=i+1;j<n;j++)
     {
         if(d[i].year>d[j].year)
         {
             int temp_year,temp_month,temp_day,temp_hour,temp_minitus,temp_second;
             temp_year=d[j].year;
             temp_month=d[j].month;
             temp_day=d[j].day;
             temp_hour=d[j].hour;
             temp_minitus=d[j].minitus;
             temp_second=d[j].second;
             d[j].year=d[i].year;
             d[j].month=d[i].month;
             d[j].day=d[i].day;
             d[j].hour=d[i].hour;
             d[j].minitus=d[i].minitus;
             d[j].second=d[i].second;
             d[i].year=temp_year;
             d[i].month=temp_month;
             d[i].day=temp_day;
             d[i].hour=temp_hour;
             d[i].minitus=temp_minitus;
             d[i].second=temp_second;
         }else if(d[i].year==d[j].year)
         {
              if(d[i].month>d[j].month)
         {
             int temp_year,temp_month,temp_day,temp_hour,temp_minitus,temp_second;
             temp_year=d[j].year;
             temp_month=d[j].month;
             temp_day=d[j].day;
             temp_hour=d[j].hour;
             temp_minitus=d[j].minitus;
             temp_second=d[j].second;
             d[j].year=d[i].year;
             d[j].month=d[i].month;
             d[j].day=d[i].day;
             d[j].hour=d[i].hour;
             d[j].minitus=d[i].minitus;
             d[j].second=d[i].second;
             d[i].year=temp_year;
             d[i].month=temp_month;
             d[i].day=temp_day;
             d[i].hour=temp_hour;
             d[i].minitus=temp_minitus;
             d[i].second=temp_second;
         }else if(d[i].month==d[j].month)
         {
              if(d[i].day>d[j].day)
         {
             int temp_year,temp_month,temp_day,temp_hour,temp_minitus,temp_second;
             temp_year=d[j].year;
             temp_month=d[j].month;
             temp_day=d[j].day;
             temp_hour=d[j].hour;
             temp_minitus=d[j].minitus;
             temp_second=d[j].second;
             d[j].year=d[i].year;
             d[j].month=d[i].month;
             d[j].day=d[i].day;
             d[j].hour=d[i].hour;
             d[j].minitus=d[i].minitus;
             d[j].second=d[i].second;
             d[i].year=temp_year;
             d[i].month=temp_month;
             d[i].day=temp_day;
             d[i].hour=temp_hour;
             d[i].minitus=temp_minitus;
             d[i].second=temp_second;
         }else if(d[i].day==d[j].day)
         {
              if(d[i].hour>d[j].hour)
         {
             int temp_year,temp_month,temp_day,temp_hour,temp_minitus,temp_second;
             temp_year=d[j].year;
             temp_month=d[j].month;
             temp_day=d[j].day;
             temp_hour=d[j].hour;
             temp_minitus=d[j].minitus;
             temp_second=d[j].second;
             d[j].year=d[i].year;
             d[j].month=d[i].month;
             d[j].day=d[i].day;
             d[j].hour=d[i].hour;
             d[j].minitus=d[i].minitus;
             d[j].second=d[i].second;
             d[i].year=temp_year;
             d[i].month=temp_month;
             d[i].day=temp_day;
             d[i].hour=temp_hour;
             d[i].minitus=temp_minitus;
             d[i].second=temp_second;
         }else if(d[i].hour==d[j].hour)
         {
              if(d[i].minitus>d[j].minitus)
         {
             int temp_year,temp_month,temp_day,temp_hour,temp_minitus,temp_second;
             temp_year=d[j].year;
             temp_month=d[j].month;
             temp_day=d[j].day;
             temp_hour=d[j].hour;
             temp_minitus=d[j].minitus;
             temp_second=d[j].second;
             d[j].year=d[i].year;
             d[j].month=d[i].month;
             d[j].day=d[i].day;
             d[j].hour=d[i].hour;
             d[j].minitus=d[i].minitus;
             d[j].second=d[i].second;
             d[i].year=temp_year;
             d[i].month=temp_month;
             d[i].day=temp_day;
             d[i].hour=temp_hour;
             d[i].minitus=temp_minitus;
             d[i].second=temp_second;
         }else if(d[i].minitus==d[j].minitus)
         {
              if(d[i].second>d[j].second)
         {
             int temp_year,temp_month,temp_day,temp_hour,temp_minitus,temp_second;
             temp_year=d[j].year;
             temp_month=d[j].month;
             temp_day=d[j].day;
             temp_hour=d[j].hour;
             temp_minitus=d[j].minitus;
             temp_second=d[j].second;
             d[j].year=d[i].year;
             d[j].month=d[i].month;
             d[j].day=d[i].day;
             d[j].hour=d[i].hour;
             d[j].minitus=d[i].minitus;
             d[j].second=d[i].second;
             d[i].year=temp_year;
             d[i].month=temp_month;
             d[i].day=temp_day;
             d[i].hour=temp_hour;
             d[i].minitus=temp_minitus;
             d[i].second=temp_second;
         }
         }
         }
         }
         }
         }
     }
        printf("%02d/%02d/%04d %02d:%02d:%02d\n",d[i].day,d[i].month,d[i].year,d[i].hour,d[i].minitus,d[i].second);
    }
    return 0;
}