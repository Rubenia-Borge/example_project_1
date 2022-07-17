
#ifndef ITEMH
#define ITEMH

#include <string>

class Item {
	public:
		
		Item();
		// name n, description d, category cat, code c, price p, imported i 
		Item(std::string n, std::string d, std::string cat, int c, double p, bool i);

		
		void SetName(std::string n);
		void SetDescription(std::string d);
		void SetCategory(std::string cat);
		void SetCode(int c);	
		void SetPrice(double p);
		void SetImported(char i);

		
		std::string GetName();
		std::string GetDescription();
		std::string GetCategory();
		int GetCode();
		double GetPrice();
		char GetImported();

	private:
		std::string name;
		std::string description;
		std::string category;
		int code;
		double price;
		char imported; // (y) yes, (n)o
};

#endif
