#include<iostream>
#include<random>  //現代っ子な random のライブラリ
#include<cstdlib>

int DiceRoll ()
{
    int i=0;
    std::random_device my_rand; //seed値は内部的に時間やら何やらで取得されるようになった
								//お好きな名前をつけてあとは呼ぶだけ　楽ちんちん
                                //その気になると正規分布で出力もできるらしい　器用だ
    i = my_rand() % 20 + 1; // iは1〜20の値を取るようにする　もでゅろ君を活用

    return i;
}


int main()
{
    std::cout<< "ダイス・ロォーーーールッ！！！　　＞＞＞＞　　" << DiceRoll() << std::endl;
}