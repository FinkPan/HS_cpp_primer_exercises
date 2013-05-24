//指出下列输出语句哪些（如果有）是合法的。

//std::cout << "/*";
//std::cout << "*/";
//std::cout << /* "*/" */;

//预测结果，然后编译包含上述三条语句的程序，检查你的答案。纠正所遇到的错误。

//答案：
//预测结果:
//第一行，和第三行是合法的。第二行是不合法的。

#include <iostream>
int main()
{
    std::cout << "/*";                   //   0 errors, 0 warnings (0 minutes, 1 seconds)  ;输出结果： /*
    std::cout << "*/";                   //   0 errors, 0 warnings (0 minutes, 0 seconds)  ;输出结果： */
    std::cout << /* "*/" */;                //   /home/fink/fink/cpp_primer_exercises/01.08/result/result_0108.cpp:17:4: 错误： 缺少结尾的 " 字符
                                           //   /home/fink/fink/cpp_primer_exercises/01.08/result/result_0108.cpp: 在函数‘int main()’中:
                                           //   /home/fink/fink/cpp_primer_exercises/01.08/result/result_0108.cpp:18:1: 错误： expected primary-expression before ‘}’ token
                                           //   /home/fink/fink/cpp_primer_exercises/01.08/result/result_0108.cpp:18:1: 错误： expected ‘;’ before ‘}’ token
                                           //   Process terminated with status 1 (0 minutes, 0 seconds)
                                           //   4 errors, 0 warnings (0 minutes, 0 seconds)
}
//编译后发现：第一行和第二行是合法的，第三行是错误的。
//其原因为：

//认为第二行是不合法的是 以为/“为转义符号，结果查询了转义符号是 "\" 而不是 "/".

//认为第三行是合法的，是以为第一个/*  和最后一个 */ 会把中间那个 */注释掉，结果看了文档发现这一段：
//      注释总是以 /* 开始并以 */ 结束。这意味着，一个注释对不能出现在另一个注释对中。
//这个是看书不仔细啊。

