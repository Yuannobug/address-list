#include"ͨѶ¼.h"
int my_srch(struct list* list1, char name1[],int* num)
{
    int i = 0;
    for (i = 0; i < (*num); i++)
    {
        if (strcmp(list1[i].name, name1) == 0)
            return i;
    }
    if (i == (*num))
        return -1;
}

void Add(struct list* list1,int* num)
{
    if (( * num) == Max)
    {
        printf("�Ѿ��ﵽ��󴢴������޷�¼���µ���Ϣ��\n");
    }
    else
    {
        printf("������������\n");
        scanf("%s",&(list1[*num].name));
        printf("�������Ա�\n");
        scanf("%s", &(list1[*num].sex));
        printf("���������䣺\n");
        scanf("%d", &(list1[*num].age));
        printf("������绰���룺\n");
        scanf("%s", &(list1[*num].num1));
        printf("�������ַ��\n");
        scanf("%s", &(list1[*num].addr));
        (* num)++;
    }
}

void Del(struct list* list1,int* num)
{
    char name1[Maxname] = { 0 }; int judge = 0;
    int i = 0;
    printf("����������Ҫɾ������������\n");
    scanf("%s", &name1);
    judge=my_srch(list1,name1,num);
    if (judge == -1)
        printf("�������û���Ϣ��\n");
    else
    {
        for (i = judge; i < ((*num) - 1); i++)
        {
            strcpy(list1[i].name, list1[i+1].name);
            strcpy(list1[i].sex, list1[i+1].sex);
            strcpy(list1[i].num1, list1[i+1].num1);
            strcpy(list1[i].addr, list1[i+1].addr);
            list1[i].age = list1[i+1].age;
        }
        (*num)--;
    }
}

void Srch(struct list* list1,int* num)
{
    char name1[Maxname] = { 0 }; int judge = 0;
    printf("����������Ҫ���ҵ�������\n");
    scanf("%s", &name1);
    judge=my_srch(list1,name1,num);
    if (judge == -1)
        printf("�������û���Ϣ��\n");
    else
    {
        printf("���û�����ϢΪ��\n");
        printf("������%s\n", list1[judge].name);
        printf("�Ա�%s\n", list1[judge].sex);
        printf("���䣺%d\n", list1[judge].age);
        printf("�绰���룺%s\n", list1[judge].num1);
        printf("��ַΪ��%s\n", list1[judge].addr);

    }
}

void Modif(struct list* list1,int* num)
{
    char name1[Maxname] = { 0 }; int judge = 0;
    printf("����������Ҫ�޸ĵ�������\n");
    scanf("%s", &name1);
    judge=my_srch(list1 ,name1,num);
    if (judge == -1)
        printf("�������û���Ϣ��\n");
    else
    {
        printf("�������޸ĺ��������\n");
        scanf("%s", &(list1[judge].name));
        printf("�������޸ĺ���Ա�\n");
        scanf("%s", &(list1[judge].sex));
        printf("�������޸ĺ�����䣺\n");
        scanf("%d", &(list1[judge].age));
        printf("�������޸ĺ�ĵ绰���룺\n");
        scanf("%s", &(list1[judge].num1));
        printf("�������޸ĺ�ĵ�ַ��\n");
        scanf("%s", &(list1[judge].addr));
        printf("�޸ĳɹ���\n");
    }
}

void Show(struct list* list1,int* num)
{
    int i = 0;
    if(*num==0)
    {
        printf("ͨѶ¼Ϊ��\n");
    }
    else
    {
        for (i = 0; i < (*num); i++)
        {
            printf("������������������������������������\n");
            printf("������%s\n", list1[i].name);
            printf("�Ա�%s\n", list1[i].sex);
            printf("���䣺%d\n", list1[i].age);
            printf("�绰���룺%s\n", list1[i].num1);
            printf("��ַΪ��%s\n", list1[i].addr);
            printf("������������������������������������\n");
        }
        printf("�Ѽ���ȫ�����ݣ�\n");
    }
}


int main()
{

    return 0;
}