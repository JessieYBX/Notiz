

/* 🔟#include <stdio.h>
int Add(int x, int y)
{
    int z=x+y;
    return z;
}
int main()
{
    int a=100;
    int b=200;
    int sum=0;
    sum=Add(a,b);
    printf("%d\n",sum);
return 0;
}*/


/* 9⃣️ #include <stdio.h>
int main() {
    int arr[10]={0}; //10个整型元素的数组
    //10*sizeof（int）=40； int 占4个字符
    printf("%lu\n",sizeof(arr)); // 数组总大小
    int sz=0;
    //计算数组的元素个数： 个数= 数组总大小/每个元素的大小
    sz=sizeof(arr)/sizeof(arr[2]);
    printf("sz= %d\n",sz);

return 0;
}*/


/* 8⃣️ #include <stdio.h>
int main()
{
    int a=10;
    sizeof 计算变量/类型所占空间大小，单位是字节
    printf("&d\n",sizeof(a));
    printf("&d\n",sizeof a); a的括号可省；
    printf("&d\n",sizeof(int)); int 的括号不能省略；
    return 0;
}*/



/* 7⃣️ #include <stdio.h>
int main()
{
    //0 为假；
    //非0为真；
    int a=10; = 为赋值
    printf("%d\n",a);
    printf("%d\n",!a);！把真变成假，把假变成真；
    return 0;
}*/


//=赋值
//==判断相等
// a=a+10  与 a+=10 相同
// a=a-20  与 a-=20 相同
/*a=a+10 与   a*=10 相同
  a=a-10    a-=10
  a=a&10    a&=10

*/


/* 6⃣️ #include <stdio.h>
int main()
{
    &按位与：同为1，否则为0
    |按位或：有一个为1，则为1
    ^按位异或：对应的二进制相同则为0，相异则为1
    int a=3;// 3转换成二进制是 011
    int b=5;//5转换成二进制是 101
     //int c=a^b 不是次方，是异或
     //011
    //101
   //得为110
    int c=a&b;           //001

    printf("%d\n",c);
    return 0;
}*/



/* 5⃣️ #include <stdio.h>
int main()
{
    int a=1;
    int b=a<<2;//b=a向左移动2位；<<左移；>>右移（二进制）移位操作
    printf("%d\n",b);
    return 0;
}*/



/* 4⃣️ #include <stdio.h>
int main()
{
    int a=5%2;//求余数
    printf("%d\n",a);
    return 0;

}*/


/* 3⃣️ #include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};//数组,下标从零开始，[数字]表示打印第几个下标的值
   // printf("%d\n",arr[4]);
    int i=0;//i=0-9
    while (i<10)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    return 0;
}*/




/* 2⃣️ #include <stdio.h>

int Add(int x, int y)
{
    int z=x+y;
    return z;
}
int main()
{
    int a=19;
    int b=5;
    int sum = Add(a, b);
    printf("sum= %d\n",sum);
    return 0;
}*/





/* 1⃣️ #include <stdio.h>

int main() {
    int line=0;
    printf("Hello, World!\n");
    while (line<100)
    {
       printf("hard working:%d\n",line);
       line++;
    }
    if(line>=100)
    {
        printf("good job\n");
    }
    return 0;
}
*/
