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
//ͨѶ¼��
//1. ���Դ��1000���˵���Ϣ
//2. �˵���Ϣ�����֣����䣬�绰��סַ���Ա�
//3. ������ϵ��
//4. ɾ����ϵ��
//5. ������ϵ��
//6. �޸���ϵ��
//7. �������� / ���䣩
//8.��ʾͨѶ¼
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
	InitContact(&con);//��ʼ��
	do 
	{
		menu();
		printf("��ѡ��<");
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
			printf("�˳�����");
			break;
		default:
			printf("����ʧ�ܡ�");
			break;
		}

	} while (imput);


	return 0;
}