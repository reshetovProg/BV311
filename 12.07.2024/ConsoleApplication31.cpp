#include <iostream>
#include <string>
#define random(min, max) min+rand()%(max+1-min)
using namespace std;

#include "Constants.h"
#include "Shop.h"


int main()
{
  setlocale(LC_ALL, "");
  Shop shop;
  
  for (int i = 0; i < 7; i++) {
    int  randNumber = random(0, FRUITS_COUNT - 1);
    shop.addProduct(new Product(FRUITS[randNumber][0], stof(FRUITS[randNumber][1]), random(50, 150), Category::FRUIT));
  }

  for (int i = 0; i < 5; i++) {
    int  randNumber = random(0, VEGETABLES_COUNT - 1);
    shop.addProduct(new Product(VEGETABLES[randNumber][0], stof(VEGETABLES[randNumber][1]), random(50, 150), Category::VEGETABLE));
  }

  shop.showProducts();

  shop.startBuy();
  shop.buyProductById(2, 5);
  shop.buyProductById(3, 20);
  shop.buyProductById(4, 30);
  shop.buyProductById(5, 50);
  shop.buyProductById(1, 40);
  shop.endBuy();

  
}
