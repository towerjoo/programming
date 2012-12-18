---
layout: note
title: Notes for chap1
category: language
tags: 
---

## 章节

K&R Chapter 1: A Tutorial Introduction, P5-P34

## 要点

作者通过示例介绍了：hello world, 变量和语句，循环，宏，输入输出，数组，函数，Call by value，外部变量和作用域。

这些都是通过简单的代码示例来完成，每个示例的代码也是很值得一读的，简洁优美，出自C语言之父之手，学习的价值自是
毋庸置疑。

有如下的要点（或者自己之前认识不清）：

1. statement和expression: <stroke>前者包含后者</stroke>，后者是语句，即包含operands和operation(操作数和操作符）, **expression可以计算为某个数值**
   statement则是do something，是一个执行单元，在C中以";"结尾。 See [here][here]. 例如: *1+2* 是expression, *a = 1 + 2;* 是statement。
2. C的哲学：Programmers know what they are doing
3. EOF不是char，如果需要hold这个值，使用int
4. 函数调用都是call by value, 但可以通过address(pointer)来做些其他语言的call by reference功能，但即使是传address也是call by value
5. parameter和argument: parameter是函数声明中的形式参数，argument是函数调用时的实际参数。（parameter也称为formal argument, argument也称为
   actual argument)
6. '\0'作为字符数组终结符
7. define和declare: 定义时需要分配内存空间，声明则不需要，只是声明类型。(P33)
8. automatic和external: 函数中声明的变量通常为automatic，在函数执行结束时是否内存；external变量则是函数之外声明的变量，可以被其它函数修改和使用，并不会
   自动释放。
9. main也是普通函数，只是编译器会将其作为执行入口来执行。 

## 心得


## 参考

[here]: http://stackoverflow.com/questions/19132/expression-versus-statement
