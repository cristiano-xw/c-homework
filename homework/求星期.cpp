#include <stdio.h>

const char * getWeekdayByYearday(int iY, int iM, int iD) 
{
    int iWeekDay = -1; 
    if (1 == iM || 2 == iM) 
    {   
        iM += 12; 
        iY--;
    }   
    iWeekDay = (iD + 1 + 2 * iM + 3 * (iM + 1) / 5 + iY + iY / 4 - iY / 100 + iY / 400) % 7;
    switch(iWeekDay)
    {   
        case 0 : return "Sunday"; break;
        case 1 : return "Monday"; break;
        case 2 : return "Tuesday"; break;
        case 3 : return "Wednesday"; break;
        case 4 : return "Thursday"; break;
        case 5 : return "Friday"; break;                                                             
        case 6 : return "Saturday"; break;
        default : return NULL; break;
    }   

    return NULL;
}

int main()
{
    int year,month,day;
    char ch='1';
    while(ch != '\033')
    { 
        printf("\n���������ڣ�\n��ʽΪ��1900,1,1\n");
        scanf("%d,%d,%d",&year,&month,&day);
        const char * p = getWeekdayByYearday(year, month, day);
        printf("WeekDay : %s\n", p);
        ch = getchar();
        printf("\n");
    }
}
