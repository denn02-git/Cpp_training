#include<iostream>

int main(void)
{
    int hoge = 10;

    std::cout<< hoge << std::endl;

    char hogehoge= 10;

    std::cout << hogehoge << std::endl;// VBAでいうところの Char(10)＝改行 を出力してしまう　代入した数値が文字コードとして認識されている　
    std::cout << static_cast<int>(hogehoge) << std::endl;// int型にキャストすれば素直に数値を表示する　char型が内部的にはint型となんら変わりないのがややこしいけども、悪用も可能
                                                         // a を示す数値に　1を足せばb というふう

    
}