/*
 *主文件
 */
#include<stdio.h>
#include<string.h>
#define useage "zuosidelord 1.0\nUsage: zuosidelord  [options] [targets...]\n-h:Print this help summary page.\n-p:Port scan\n-o:Os detection\n-pn:Host discovery\n--bug:Vulnerable list\n-f:Full scan\n"


int main(int func,char *arg[])
{
	if(func>1)
	{
		if(!strcmp(arg[1],"-h"))
			printf("帮助指南");
		else if(!strcmp(arg[1],"-p"))
			printf("ping ing");
	}
	else
		printf(useage);
}

/*
 *参数检查
 */

/*
 *
 */

