#include<iostream>
#include<ctime>
#include<cstdlib>

int DiceRoll ()
{
    int i=0;
    std::srand(time(NULL)); //まだこの　std:: の意味はよくわかっていない   NULL を小文字で書いて1敗
    i = rand() % 20 + 1; // iは1〜20の値を取るようにする　もでゅろ君を活用

    return i;
}


int main()
{
    std::cout<< "ダイス・ロォーーーールッ！！！　　＞＞＞＞　　" << DiceRoll() << std::endl;
}