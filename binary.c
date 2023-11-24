#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void 	fuck(void)
{
	printf("\033[1;31m\n\n               $$$$$$\n");
	printf("              $$____$$\n");
	printf("              $$____$$\n");
	printf("              $$____$$\n");
	printf("              $$____$$\n");
	printf("              $$____$$\n");
	printf("          $$$$$$____$$$$$$\n");
	printf("        $$____$$____$$____$$$$\n");
	printf("        $$____$$____$$____$$__$$\n");
	printf("$$$$$$__$$____$$____$$____$$____$$\n");
	printf("$$____$$$$________________$$____$$\n");
	printf("$$______$$______________________$$\n");
	printf("  $$____$$______________________$$\n");
	printf("   $$$__$$______________________$$\n");
	printf("    $$__________________________$$\n");
	printf("     $$$________________________$$\n");
	printf("      $$______________________$$$\n");
	printf("       $$$____________________$$\n");
	printf("        $$____________________$$\n");
	printf("         $$$________________$$$\n");
	printf("          $$________________$$\n");
	printf("          $$$$$$$$$$$$$$$$$$$$\n\n\n\033[0m");

}
int R(int min, int max) {
    return min + rand() % (max - min + 1);
}

void	print(int density, int time)
{
	int j = -1;
	while (++j < time)
	{
		int i = -1;
		while (++i < 100)
		{
			if (R(0, density) == 0)
				printf("\033[1;32m%d", R(0, 1));
			else
				printf(" ");
		}
	}
}
int main(void)
{
	system("clear");
	printf("\033[1;32mEnter The density (from 0 to 10)   :   ");
	int d;
	scanf("%d", &d);
	if (d < 0 || d > 10)
	{
		printf("\033[1;32mFucking idiot (from 0 to 10)  :   ");
		scanf("%d", &d);
	}
	if (d < 0 || d > 10)
	{
		printf("\033[1;32mFucking idiot (from 0 to 10)  :   ");
		scanf("%d", &d);
	}
	if (d < 0 || d > 10)
	{
		fuck();
		return 0;
	}
	printf("\033[1;32mEnter The time (from 100 to 10000)  :   ");
	int t;
	scanf("%d", &t);
	if (t < 100 || t > 10000)
	{
		printf("\033[1;32mFucking idiot (from 100 to 10000)  :   ");
		scanf("%d", &t);
	}
	if (t < 100 || t > 10000)
	{
		printf("\033[1;32mFucking idiot (from 100 to 10000)  :   \033[0m");
		scanf("%d", &t);
	}
	if (t < 100 || t > 10000)
	{
		fuck();
		return 0;
	}
	printf(" ___________________________________________\n");
	printf("_________________Get Ready___________________\n");
	printf(" ___________________________________________\n");
	system("sleep 3");
	int i = 1;
	while (++i < 100)
	{
		print(d, t);
		system("sleep 0.05");
		system("clear");
	}
	system("clear");
}

