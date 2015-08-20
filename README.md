# cplusplus-eth0
<h3>Assignment TCP/IP : Lecturer Dr. Anang</h3>
C++ code to find eth0 in linux

<h2> Group Member </h2>
1. Ahmad Afiq Bin Baharudin 1121117010
2. Mohd Dzuljalalil Ikhram b. Rashid 1121116641

<h2> Task That Have Been Carried Out </h2>
1. Install Git and Create account Github
2. Opening Terminal (or Git Bash)
3. Seeing Files, Moving to Folders
4. Make a Folder, Make a File
5. Git Respitory
6. Status Update
7. Staging
8. Committing
9. Telling Git about Github
10. A Push or A Shove

<h2>Work Distribution</h2>
All workd distribution are equally divided among members

<h2>c++ code to view eth0 on linux</h2>
```c++
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
```

