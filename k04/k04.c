#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 14


struct FILE_DATA
{
    int gender;
    double heights;
    double ID;
} data[15];

int main(void)
{
    char fname_1[FILENAME_MAX], fname_2[FILENAME_MAX];
    char buf[256];
    FILE * fp_1;
    FILE * fp_2;
    int gender, i, j, nodata;
    double heights, ID, search;
    nodata = 0;
    i = 0;
    j = 0;

    struct FIlE_DATA;

    printf("Input the filename of sample heights:");
    fgets(fname_1, sizeof(fname_1), stdin);
    fname_1[strlen(fname_1) - 1] = '\0';

    printf("Input the filename of sample ID:");
    fgets(fname_2, sizeof(fname_2), stdin);
    fname_2[strlen(fname_2) - 1] = '\0';

    fp_1 = fopen(fname_1,"r");
    if(fp_1 == NULL)
    {
        fputs("error\n", stderr);
        exit(EXIT_FAILURE);
    }

    fp_2 = fopen(fname_2,"r");
    if(fp_2 == NULL)
    {
        fputs("error\n", stderr);
        exit(EXIT_FAILURE);
    }

    while(fgets(buf,sizeof(buf),fp_1) != NULL)
    {
        sscanf(buf,"%d,%lf", &gender, &heights);
        data[i].gender = gender;
        data[i].heights = heights;
        i++;
    }
;
    while(fgets(buf,sizeof(buf),fp_2) != NULL)
    {
        sscanf(buf,"%lf", &ID);
        data[j+1].ID = ID;
        j++;
    }

    printf("Which ID's data do you want? :");
    scanf("%lf", &search);

    for(j = 1; j < NUM+1; j++)
    {
        if(data[j].ID == search)
        {
            printf("ID : %.0lf\n", data[j].ID);

            if(data[j].gender == 1)
            {
                printf("gender : Male\n");
            }
            else
            {
                printf("gender : Female\n");
            }

            printf("heights : %.2lf\n", data[j].heights);
        }

        else
        {
            nodata++;
        }
    }

    if(nodata == NUM)
    {
        printf("No data");
    }

    if(fclose(fp_1) == EOF)
    {
        fputs("error\n", stderr);
        exit(EXIT_FAILURE);
    }

    if(fclose(fp_2) == EOF)
    {
        fputs("error\n", stderr);
        exit(EXIT_FAILURE);
    }

    return 0;
}


