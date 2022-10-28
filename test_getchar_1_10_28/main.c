#include <stdio.h>

int main() {

    /*int ch=0;
    while((ch=getchar()) !=EOF)//end of file 文件结束标志，EOF=-1
    {
        putchar(ch);77
    }*/
    int ret=0;
    int ch=0;
    char password[20]={0};
    printf("请输入密码：>");
    /*scanf("%s",password);   //密码123456（/n），/n为回车键并不被scanf读取，下一步getchar读取/n，输出放弃确认
    getchar();   */
    scanf("%s",password);    //密码123456 ABCD（/n），此时scanf只读取空格前的字符，使用while循环，直到读取到最后的/n结束，进行下一步
    while((ch=getchar()) !='\n')
    {
        ;//不需要执行其他程序
    }

    printf("请确认（Y/N）：>");
    ret=getchar(); //Y//N
    if (ret=='Y')
    {
        printf("确认成功\n");
    }else
    {
        printf("放弃确认\n");
    }
    return 0;
}
