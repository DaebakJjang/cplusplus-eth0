#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    FILE *fp;

    char returnData[64];

    fp = popen("/sbin/ifconfig eth0", "r");

    while (fgets(returnData, 63, fp) != NULL)
    {
        if (returnData[0] == '\n') {
            continue;
        }

        char no1[60], no2[60];
        strcpy(no1, strtok(returnData, " "));
    if (strcmp("inet", no1) != 0) {
            continue;
        }

        strcpy(no2, strtok(NULL, " "));
        printf("%s %s\n", no1, no2);

    }

    return 0;
}
