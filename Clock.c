#include<stdio.h>
#include<windows.h>

void main()
{
    int c = 1, choice;
    int h = 0, m = 0, s = 0;
    int H, M, S;
    while(c==1)
    {
        printf("\n1.Stopwatch\n2.Timer\n");
        printf("Enter 1 or 2:\t");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:   // for stopwatch
                while(1)
                {
                    s++;
                    if(s>59){
                        m++;
                        s=0;
                    }
                    if(m>59){
                        h++;
                        m=0;
                    }
                    printf("Stopwatch:\n");
                    printf("%02d:%02d:%02d", h, m, s);   // 00:00:00 format
                    Sleep(1000);     // for one second delay
                    system("cls");   // to clear the previous output
                }
                break;
            case 2:   // for timer
                printf("Enter time in hour:minute:second format:\n");
                scanf("%d%d%d", &H,&M,&S);
                if(M > 59 || S > 59){
                    printf("Invalid Input\n");
                }
                else
                {
                    while(1)
                    {
                        if(S<0){
                            M--;
                            S=59;
                        }
                        if(M<0){
                            H--;
                            M=59;
                        }
                        printf("Timer:\n%02d:%02d:%02d", H, M, S);
                        if(H==0 && M==0 && S==0){
                            printf("\nTime over!");
                            break;
                        }
                        Sleep(1000);
                        system("cls");
                        S--;
                    }
                }
                printf("\nTo continue, enter 1 else 0:\t");
                scanf("%d", &c);
                break;
            default:
                printf("\nInvalid input");
                break;
        } 
    }           
}

