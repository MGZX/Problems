/*
1003. 我要通过！(20)

“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
输入格式： 每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。

输出格式：每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出YES，否则输出NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
输出样例：
YES
YES
YES
YES
NO
NO
NO
NO
提交代码
*/
#include <stdio.h>
#include <stdlib.h>
int judge(void);
int main(void)
{
	int num = 0;
	scanf("%d", &num);
	getchar();
	for (int i = 0; i < num; i++)
	{
		if (judge() == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	//system("pause");
	return 0;
}

int judge(void)
{
	char ch = 0;
	int ret = 1;
	int P_flag = 0;
	int T_flag = 0;
	int P_index = -1;
	int T_index = -1;
	int index = 0;
	while((ch = getchar()) != '\n')
	{
		if (ch != 'A')
		{
			if (ch == 'P')
			{
				P_flag++;
				P_index = index;
			}
			else if (ch == 'T')
			{
				T_flag++;
				T_index = index;
			}
			else
				ret = 0;
		}
		index++;
	}
	if (!(P_flag == 1 && T_flag == 1 && T_index - P_index >1))
		ret = 0;
	return ret;
}