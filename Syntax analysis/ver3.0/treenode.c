#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "treenode.h"

void CreateTreeNode(treeNode** p, int t, int l, char* n, char* text)
{
	*p = (treeNode*)malloc(sizeof(treeNode));
	(*p)->type = t;
	(*p)->line = l;
	strcpy((*p)->name, n);
	if(strcmp(n, "ID") == 0 || strcmp(n, "INTEGER") == 0 || strcmp(n, "FLOATING") == 0 || 
	   strcmp(n, "CHAR") == 0 || strcmp(n, "STRING") == 0 || strcmp(n, "TYPE") == 0 || 
	   strcmp(n,"COMPARE") == 0 || strcmp(n, "OCTNUM") == 0 || strcmp(n, "HEXNUM") == 0)
	{
		strcpy((*p)->content, text);
	}    
    int i;
    for(i = 0;i < 10;i++)
    {
    	(*p)->children[i] = NULL;
    }

}

void PrintTreeNode(treeNode* p,int blank)
{
	if(p == NULL)
	{
		return;
	}
	if(p->type == 1)
	{
		int i;
		for(i = 0;i < blank;i++)
		{
			printf(" ");
		}
		printf("%s (%d)\n",p->name, p->line);
		// print all children
		for(i = 0;i < 10;i++)
		{
			PrintTreeNode(p->children[i], blank + 2);
		}
	}
	else
	{
		int i;
		for(i = 0;i < blank;i++)
		{
			printf(" ");
		}
		printf("%s", p->name);
		if(strcmp(p->name, "ID") == 0 || strcmp(p->name, "TYPE") == 0 ||
		   strcmp(p->name, "CHAR") == 0 || strcmp(p->name, "STRING") == 0 ||
		   strcmp(p->name,"COMPARE") == 0 || strcmp(p->name, "OCTNUM") == 0 || strcmp(p->name, "HEXNUM") == 0)
		{
			printf(": %s", p->content);
		}
		else if(strcmp(p->name, "INTEGER") == 0)
		{
			int integer = strtol(p->content, NULL, 0);
			printf(": %d", integer);
		}
		else if(strcmp(p->name, "FLOATING") == 0)
		{
			float floating = atof(p->content);
			printf(": %f", floating);
		}
		printf("\n");
	}
}
