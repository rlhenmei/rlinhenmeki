 #define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//    int n = 0;
//    int k = 0;
//    char arr[100] = { 0 };
//    while (~scanf("%d %d", &n, &k)) {
//        gets(arr);
//        for (int i = 0; i < k; i++) {
//            printf("%c", arr[i]);
//        }
//    }
//    return 0;
//}
//通讯录：
//1. 可以存放1000个人的信息
//2. 人的信息：名字，年龄，电话，住址，性别
//3. 增加联系人
//4. 删除联系人
//5. 查找联系人
//6. 修改联系人
//7. 排序（名字 / 年龄）
//8.显示通讯录
#include"Contact.h"
void menu()
{
	printf("*****************************\n");
	printf("******1.Add     2.Delete*****\n");
	printf("******3.Search  4.Modify*****\n");
	printf("******5.Sort    6.Show*******\n");
	printf("******0.exit          *******\n");
	printf("*****************************\n");
}
int main()
{
	int imput = 0;
	Contact con;
	char Delete_name[20] = { 0 };
	InitContact(&con);//初始化
	do 
	{
		menu();
		printf("请选择<");
		scanf("%d", &imput);
		switch (imput)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			
			Delete(&con);
			break;
		case 3:
			Search(&con);
			break;
		case 4:
			Modify(&con);
			Show(&con);
			break;
		case 5:
			//Sort(&con);
			break;
		case 6:
			Show(&con);
			break;
		case 0:
			DestroyContact(&con);
			printf("退出程序。");
			break;
		default:
			printf("输入失败。");
			break;
		}

	} while (imput);


	return 0;
}