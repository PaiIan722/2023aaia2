///week09-4.cpp 字串的函式 課本Page4-8
#include <stdio.h>
#include <string.h> ///要使用字串的函式
int main()
{
    char line[100]; ///可放100個字母,很長
    printf("請輸日一堆字母,不要有空格,最後跳行結束輸入");
    scanf("%s", line);

    int N = strlen(line); ///要查出字串長度
    printf("字串的長度是:%d\n", N);
}
