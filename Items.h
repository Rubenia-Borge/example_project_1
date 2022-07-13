
#ifndef ITEMS_H
#define ITEMS_H

#include <vector>
#include "Item.h"

class Items{
    public:
      Items();
      
      void AddItem();
      void EditItem();
      void DeleteItem();
      void ItemSearch();
      void FindItem();
      void PrintItemsList();
      void PrintItemDetails();
      void LoadItems();
      void SaveItems();
      std::vector<Item> LoadItemsList();
      void SaveItemsList (std::vector<Item> items);
      int FindItemByCode(int code);
      
    private:
      std::vector<Item> itemList;
      
};


#endif
