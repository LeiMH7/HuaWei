#include <iostream>
#include <cstring>
/*
1. 获取输入
2. 拆分数组
3. 输出数组
*/

using std::cin;
using std::cout;
using std::endl;
char input[101] = {0};
int Input()
{
    cin.getline(input, 101);
    return strlen(input);
}

void split(char input[], int len)
{
    if (!len) return;

    int count = 0;
    char output[9] = {0};
    int num = len / 8;
    int mod = len % 8;
    char *p = input;

    for (int i = 0; i < num; i++) {
        memcpy(output, p, 8);
        p += 8;
        cout << output << endl;
    }

    memset(output, 0, 8);
    memcpy(output, p, mod);

    for (int i = mod; i < 8; i++) {
        output[i] = '0';
    }

    cout << output << endl;
}

auto main() -> int
{
    split(input, Input());
    return 0;
}