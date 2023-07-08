#include"通讯录.h"
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
        printf("已经达到最大储存量！无法录入新的信息！\n");
    }
    else
    {
        printf("请输入姓名：\n");
        scanf("%s",&(list1[*num].name));
        printf("请输入性别：\n");
        scanf("%s", &(list1[*num].sex));
        printf("请输入年龄：\n");
        scanf("%d", &(list1[*num].age));
        printf("请输入电话号码：\n");
        scanf("%s", &(list1[*num].num1));
        printf("请输入地址：\n");
        scanf("%s", &(list1[*num].addr));
        (* num)++;
    }
}

void Del(struct list* list1,int* num)
{
    char name1[Maxname] = { 0 }; int judge = 0;
    int i = 0;
    printf("请输入您想要删除掉的姓名：\n");
    scanf("%s", &name1);
    judge=my_srch(list1,name1,num);
    if (judge == -1)
        printf("不存在用户信息！\n");
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
    printf("请输入您想要查找的姓名：\n");
    scanf("%s", &name1);
    judge=my_srch(list1,name1,num);
    if (judge == -1)
        printf("不存在用户信息！\n");
    else
    {
        printf("该用户的信息为：\n");
        printf("姓名：%s\n", list1[judge].name);
        printf("性别：%s\n", list1[judge].sex);
        printf("年龄：%d\n", list1[judge].age);
        printf("电话号码：%s\n", list1[judge].num1);
        printf("地址为：%s\n", list1[judge].addr);

    }
}

void Modif(struct list* list1,int* num)
{
    char name1[Maxname] = { 0 }; int judge = 0;
    printf("请输入您想要修改的姓名：\n");
    scanf("%s", &name1);
    judge=my_srch(list1 ,name1,num);
    if (judge == -1)
        printf("不存在用户信息！\n");
    else
    {
        printf("请输入修改后的姓名：\n");
        scanf("%s", &(list1[judge].name));
        printf("请输入修改后的性别：\n");
        scanf("%s", &(list1[judge].sex));
        printf("请输入修改后的年龄：\n");
        scanf("%d", &(list1[judge].age));
        printf("请输入修改后的电话号码：\n");
        scanf("%s", &(list1[judge].num1));
        printf("请输入修改后的地址：\n");
        scanf("%s", &(list1[judge].addr));
        printf("修改成功！\n");
    }
}

void Show(struct list* list1,int* num)
{
    int i = 0;
    if(*num==0)
    {
        printf("通讯录为空\n");
    }
    else
    {
        for (i = 0; i < (*num); i++)
        {
            printf("——————————————————\n");
            printf("姓名：%s\n", list1[i].name);
            printf("性别：%s\n", list1[i].sex);
            printf("年龄：%d\n", list1[i].age);
            printf("电话号码：%s\n", list1[i].num1);
            printf("地址为：%s\n", list1[i].addr);
            printf("——————————————————\n");
        }
        printf("已加载全部内容！\n");
    }
}


int main()
{

    return 0;
}