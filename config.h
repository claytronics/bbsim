#ifndef _CONFIG_H_
#define _CONFIG_H_

char* configFile;
int   configCount;
int** testData;
char* pathToFile;

void randomConfig(int,char *pathToFile);
void readConfig(char *name,char *pathToFile);
int configtest(char* name);

#endif
