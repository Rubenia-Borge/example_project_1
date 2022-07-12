
#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item{
    public:
      Item();
      Item(std::string itemCode, float itemPrice);
      
      void SetItemCode (std::string code);
      void SetItemPrice (float price);
      
      std::string GetItemCode();
      float GetItemPrice();
      
    private:
      std::string itemCode;
      int itemPrice;
     
}

#endif
