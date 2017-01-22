#include <stdio.h>
#include <string.h>
#define LIMIT 50
void addPB(struct PB *p, int i);
void deletePB(struct PB *p,char * name, int i);
void findPB(struct PB *p,char *name, int i);

typedef struct phonebook{
	char name[100];
	char number[15];
}PB;
int main()
{
	PB pb[LIMIT];
	PB *p;
	char findname[100];
	int number = 0; // name number
	p = &pb;

	while (1)
	{
		char command[10];
		printf("input command (add, delete, find, quit)\n");
		scanf("%s", &command);

		if (strcmp("add", command) == 0)
		{
			addPB(p, number);
			number++;
		}
		else if (strcmp("delete", command) == 0)
		{
			printf("input delete name\n");
			scanf("%s", &findname);
			deletePB(p, findname, number);
		}
		else if (strcmp("find", command) == 0)
		{
			printf("input find name\n");
			scanf("%s", &findname);
			findPB(p, findname,  number);
		}
		else if (strcmp("quit", command) == 0)
		{
			break;
		}
		else
		{
			printf("usage : (add, delete, find, quit)\n");
			continue;
		}
	}
	return 0;
}


void addPB(PB *p, int i)
{
	printf("input name\n");
	scanf("%s", &p[i].name);
	printf("input PhoneNumber\n");
	scanf("%s", &p[i].number);
}

void deletePB( PB *p, char *name, int i)
{
	int j;
	for (j = 0; j < LIMIT; j++)
	{
		if (strcmp(p[j].name, name) == 0)
		{
			for (int x = j+1; x < LIMIT; x++)
			{
				*p[j].name = *p[x].name;
				*p[j].name = *p[x].number;
			}
		}
	}
}

void findPB( PB *p, char *name, int i)
{
	for (i=0; i < LIMIT; i++)
	{
		if (strcmp(p[i].name, name) == 0)
		{
			printf("find information : %s %s \n",p[i].name, p[i].number);
			break;
		}
	}
}