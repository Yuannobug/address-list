#include"通讯录.h"
int main()
{
	struct list list1[Max];
	memset(list1, 0, sizeof(list1));
	int num = 0;
	int option = 0;
	printf("********************************\n");
	printf("*****        通讯录        *****\n");
	printf("********************************\n");

	do
	{
		printf("********      功能        ******\n");
		printf("********************************\n");
		printf("**1.添加联系人    2.删除联系人**\n");
		printf("**3.查找联系人    4.修改联系人**\n");
		printf("**5.显示通讯录    0.退出      **\n");
		printf("********************************\n");
		printf("******请输入您想实现的功能******\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:Add(list1,&num); break;
		case 2:Del(list1,&num); break;
		case 3:Srch(list1,&num); break;
		case 4:Modif(list1,&num); break;
		case 5:Show(list1,&num); break;
		case 0:break;
		default:printf("错误的选择方式，请重新选择！\n"); break;
		}
	} while (option);
	printf("您已退出通讯录");
	return 0;
}