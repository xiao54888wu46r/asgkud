#include <stdio.h>
#include <conio.h>
#include <windows.h>

char a[20][20]={"####  #####  ##",
                "0  #     ######",
			  	"##    ##   ####",
			  	"### ##### ### #",
			   	"  # ####  #####",
			   	"# ###    ######",
			    "   ##  ### #   ",
			    "# ####       ##",
				"#  ############",};

int main()
{
	printf("w a s d控制方向，找到出口.\n");
	int x,y;
	char ch;
	x=1;y=0;
	for(int i=0;i<=7;i++)
		puts(a[i]);
	while(1){
		ch=getch();
		if(ch=='s')
		{
			if(a[x+1][y]==' ')
			{
			a[x][y]=' ';
			x++;
			a[x][y]='0';
			}
		}
		else if(ch=='w')
		{
			if(a[x-1][y]==' ')
			{
			a[x][y]=' ';
			x--;
			a[x][y]='0';
			}
		}
		else if(ch=='a')
		{
			if(a[x][y-1]==' ')
			{
			a[x][y]=' ';
			y--;
			a[x][y]='0';
			}
		}
		else if(ch=='d')
		{
			if(a[x][y+1]==' ')
			{
			a[x][y]=' ';
			y++;
			a[x][y]='0';
			}
		}
		system("cls");
		for(int i=0;i<=7;i++)
			puts(a[i]);
		if(x==6 && y==14)
			break;
	}
	printf("恭喜，游戏通关!\n");
    return 0;
}
