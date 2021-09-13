// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <assert.h>

int main()
{
    /*char a[10] = "a";
    int b = 1;
    int c = 0xfeel;
    std::cout << c << std::endl;*/

    bool a = true, b = false;
    assert(!(a && b) == (!a || !b));
    assert(!(a || b) == (!a && !b));
}
