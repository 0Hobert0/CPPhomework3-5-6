### 题目描述

定义一个Book类，在该类定义中包括
数据成员：bookname，price，number(存书数量)；
成员函数：display() //显示图书的情况；
borrow() //将存书量减1，并显示当前存书数量；
restore() //将存书量加1，并显示当前存书数量；
在main()函数中，要求创建某种图书对象，并且对该图书进行简单的显示、借阅和归还管理。
提示：
display（）函数中的输出语句如下，请复制使用

> cout<<bookname<<" "<<price<<" "<<number<<endl;

main（）函数如下，请复制使用


> int main()
{
	char name[20]="C++";
	Book book1(name,23.5,3);
	strcpy(name,"Data Structure");
	Book book2(name,28.8,7);
	book1.borrow();
	book1.display();
	book2.restore();
	book2.display();
	return 0;
}

### 输入
> 无

### 输出
>C++ 23.5 2
Data Structure 28.8 8
