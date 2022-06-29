#include <iostream>
#include <stdio.h>
#include <stack>
#include <string.h>
#define MAX_INDEX 101
using namespace std;
stack<char> Stack;
char str[MAX_INDEX];
void Postfix(char *);
int isp(char);
int icp(char);
int main()
{
    scanf("%s", str);
    Postfix(str);
    return 0;
}
int isp(char oper)
{
    switch (oper)
    {
    case '+':
    case '-':
        return 3;
    case '*':
    case '/':
        return 2;
    case '(':
        return 8;
    case '#':
        return 8;
    }
    return 0;
}
int icp(char oper)
{
    switch (oper)
    {
    case '+':
    case '-':
        return 3;
    case '*':
    case '/':
        return 2;
    case '(':
        return 0;
    }
    return 0;
}
void Postfix(char *str)
{
    Stack.push('#');
    int strLen = strlen(str);
    for (int i = 0; i < strLen; i++)
    {
        char tmp = str[i];
        if ('A' <= tmp && tmp <= 'Z')
            cout << tmp;
        else if (tmp == ')')
        {
            for (; Stack.top() != '('; Stack.pop())
                cout << Stack.top();
            Stack.pop();
        }
        else
        {
            for (; isp(Stack.top()) <= icp(tmp); Stack.pop())
                cout << Stack.top();
            Stack.push(tmp);
        }
    }
    for (; Stack.top() != '#'; Stack.pop())
    {
        cout << Stack.top();
    }
    cout << endl;
}