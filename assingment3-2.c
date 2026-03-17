#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("문자열 입력: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    printf("변환 결과: %s\n", str);

    return 0;
}
