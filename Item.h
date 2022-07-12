
#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item{
    public:
      Item();
      Item(std::string itemCode, float itemPrice);
      
      void SetItemCode (std::string itemCode);
      void SetItemPrice (float itemPrice);
      
      std::string GetItemCode();
      float GetItemPrice();
      
    private:
      std::string code;
      int price;
     
}

#endif
