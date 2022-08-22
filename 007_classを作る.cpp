#include<iostream>

//(ヽ´ω｀) 写経から

class product
{
	const float TAX_RATE = 0.1;
	int id; //商品ID
	int price_with_NOtax; //単価
	int price_with_tax;//税込単価
	int stock; //在庫数
	
	public:
		int get_id();//商品IDのgetter
		void set_id(int new_id);//商品IDのsetter
		
		int get_price_with_NOtax();//単価のgetterその1
		int get_price_with_tax();//単位のgetterその2
		void set_price_with_NOtax(int new_price_with_NOtax);//単価のsetter　登録時は税抜価格を入れる　という設定
		
		int get_stock();//在庫数のgetter
		void set_stock(int new_stock);//在庫数のsetter
		
};

int product::get_id()//ここで判明　:: とは、クラスまたは構造体を指してそのスコープ内の関数、変数に到達するための指定子だった
					 //とはいえ、std::cout<< ... にはまだ謎が残る(なんでその書き方で関数っぽく動いとんねんという話で)

{
	//メンバー関数の内側ではメンバー変数に直接アクセスできる
	return id;	
}


void product::set_id(int new_id)
{
	id = new_id;
}

//(ヽ´ω｀)勝手にオリジナリティを出したけども、悪しき書き方の予感

int product::get_price_with_NOtax()
{
	return price_with_NOtax;
}

int product::get_price_with_tax()
{
	return price_with_tax;
}

void product::set_price_with_NOtax(int new_price_with_NOtax)
{
	price_with_NOtax = new_price_with_NOtax;
    price_with_tax = static_cast<int>(new_price_with_NOtax * (1 + TAX_RATE));
}


int product::get_stock()
{
	return stock;
}

void product::set_stock(int new_stock)
{
	if(new_stock<0)
	{
		std::cout<<"エラー：在庫数は0以上にしてください"<<std::endl;
		return;
		
	}else{
	
		stock = new_stock;
		
	}

}

int main()
{
	product pen;//pen に関するproductクラスのインスタンス
				//new とか要らんのやね(ヽ´ω｀)
	pen.set_id(0);
	pen.set_price_with_NOtax(100);
	pen.set_stock(200);

//pen がproductクラスであるため、product::をつけなくても良いという理解
	
	product* ptr = &pen; //インスタンスへのポインタ
	
	//アロー演算子を使ってgetterから値を取得
	std::cout<<"商品ID："<< ptr->get_id()<<std::endl;
	std::cout<<"税抜単価："<< ptr->get_price_with_NOtax()<<std::endl;
	std::cout<<"税込単価："<< ptr->get_price_with_tax()<<std::endl;
	std::cout<<"在庫数："<< ptr->get_stock()<<std::endl;
	
}