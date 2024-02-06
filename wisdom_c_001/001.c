#include <stdio.h>

int main()
{
	//integer 这一步是赋值，第一次定义变量（也叫初始化）变量可以变化
	int sun_flower = 9673;

	printf("1.阳光目前的值是：%d\n",sun_flower);
	//重新复制
	sun_flower = 9698;
	
	printf("2.阳关目前的值是：%d\n",sun_flower);
	//重新赋值
	sun_flower = 9798;

	printf("3.阳光目前的值是：%d\n",sun_flower);

	return 0;
}
//语法：你要定义的类型+变量名（标识符） = 你要的值