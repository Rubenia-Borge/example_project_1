
#include "Item.h"
#include <string>

Item::Item() {itemCode = "ND", itemPrice = 1.0};
Item::Item(string:: code, float price) {itemCode = code; itemPrice = price};

void Item::SetItemCode (std::string code) {this-> itemCode = code};
void Item::SetItemPrice (int price) {this-> itemPrice = price};

std::string Item::GetItemCode() {return itemCode};
float Item::GetItemPrice() {return itemPrice};
