

/* ð#include <stdio.h>
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


/* 9â£ï¸ #include <stdio.h>
int main() {
    int arr[10]={0}; //10ä¸ªæ´ååç´ çæ°ç»
    //10*sizeofï¼intï¼=40ï¼ int å 4ä¸ªå­ç¬¦
    printf("%lu\n",sizeof(arr)); // æ°ç»æ»å¤§å°
    int sz=0;
    //è®¡ç®æ°ç»çåç´ ä¸ªæ°ï¼ ä¸ªæ°= æ°ç»æ»å¤§å°/æ¯ä¸ªåç´ çå¤§å°
    sz=sizeof(arr)/sizeof(arr[2]);
    printf("sz= %d\n",sz);

return 0;
}*/


/* 8â£ï¸ #include <stdio.h>
int main()
{
    int a=10;
    sizeof è®¡ç®åé/ç±»åæå ç©ºé´å¤§å°ï¼åä½æ¯å­è
    printf("&d\n",sizeof(a));
    printf("&d\n",sizeof a); açæ¬å·å¯çï¼
    printf("&d\n",sizeof(int)); int çæ¬å·ä¸è½çç¥ï¼
    return 0;
}*/



/* 7â£ï¸ #include <stdio.h>
int main()
{
    //0 ä¸ºåï¼
    //é0ä¸ºçï¼
    int a=10; = ä¸ºèµå¼
    printf("%d\n",a);
    printf("%d\n",!a);ï¼æçåæåï¼æååæçï¼
    return 0;
}*/


//=èµå¼
//==å¤æ­ç¸ç­
// a=a+10  ä¸ a+=10 ç¸å
// a=a-20  ä¸ a-=20 ç¸å
/*a=a+10 ä¸   a*=10 ç¸å
  a=a-10    a-=10
  a=a&10    a&=10

*/


/* 6â£ï¸ #include <stdio.h>
int main()
{
    &æä½ä¸ï¼åä¸º1ï¼å¦åä¸º0
    |æä½æï¼æä¸ä¸ªä¸º1ï¼åä¸º1
    ^æä½å¼æï¼å¯¹åºçäºè¿å¶ç¸ååä¸º0ï¼ç¸å¼åä¸º1
    int a=3;// 3è½¬æ¢æäºè¿å¶æ¯ 011
    int b=5;//5è½¬æ¢æäºè¿å¶æ¯ 101
     //int c=a^b ä¸æ¯æ¬¡æ¹ï¼æ¯å¼æ
     //011
    //101
   //å¾ä¸º110
    int c=a&b;           //001

    printf("%d\n",c);
    return 0;
}*/



/* 5â£ï¸ #include <stdio.h>
int main()
{
    int a=1;
    int b=a<<2;//b=aåå·¦ç§»å¨2ä½ï¼<<å·¦ç§»ï¼>>å³ç§»ï¼äºè¿å¶ï¼ç§»ä½æä½
    printf("%d\n",b);
    return 0;
}*/



/* 4â£ï¸ #include <stdio.h>
int main()
{
    int a=5%2;//æ±ä½æ°
    printf("%d\n",a);
    return 0;

}*/


/* 3â£ï¸ #include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};//æ°ç»,ä¸æ ä»é¶å¼å§ï¼[æ°å­]è¡¨ç¤ºæå°ç¬¬å ä¸ªä¸æ çå¼
   // printf("%d\n",arr[4]);
    int i=0;//i=0-9
    while (i<10)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    return 0;
}*/




/* 2â£ï¸ #include <stdio.h>

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





/* 1â£ï¸ #include <stdio.h>

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
