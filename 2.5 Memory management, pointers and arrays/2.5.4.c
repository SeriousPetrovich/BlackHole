#include <stdio.h>
 
int a=0,b=0,c=0;
 int dop(char symbol)
   {   
    switch (symbol)
      {   
        case '(' : return  1;
        case '[' : return  2;
        case '{' : return  3;
        case '<' : return  4;
        case ')' : return -1;
        case ']' : return -2;
        case '}' : return -3;
        case '>' : return -4;  
        case(char)34 :                
        a=((a == 0)?1:0);                                
        return((a==0)?-5:5);
        case(char)39:                 
        b =((b== 0)?1:0); 
        return((b==0)?-6:6);
        case(char)96:                 
        c =((c==0)?1:0); 
        return((c==0)?-7:7); 
        default:return 0;
      }
   } 
int main(void)
{
    char line[255],d;
    int s[255];
    int Dop,i=0,found=0,j=0;
    printf("Пожалуйста, введите произвольную строку:");
    scanf("%s",line);
    do
    {   d=line[j++];
        Dop=dop(d);
        if(Dop>0)
         {   s[i]=Dop;
             i++;
         }
             if(Dop<0)
             {     if(i>0 && (s[i-1]+Dop)==0)
                   i--;
                   else
                {   found=1;
                    break;
                }
            }
    }
    while (d);
        if(!i && !found)
        printf("Баланс соблюден");
        else
        printf("Баланс не соблюден"); 
        return 0;
}
