///week09-2.cpp ���get()�Mscanf()
///�n�F�Ѧr��P�}�C�����Y
#include <stdio.h>
int main()
{
    char line[80]; ///�Ѯv���w�Τ@��r
    printf("�п�J�@��^��,���Ů�S���Y:\n");
    gets(line); ///�ҥ�6-16��
    printf("�o��r�O:%s\n", line);

    printf("�ЦA��J�@��^��:\n");
    scanf("%s", line); ///�ҥ�6-16��,�Źj�_�}
    printf("�o��r�O:%s\n", line);
}
