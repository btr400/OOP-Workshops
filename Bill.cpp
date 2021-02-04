#include <iostream>
#include "cstring.h"
#include "Bill.h"
#include "Item.h"
using namespace std;
namespace sdds {

void Bill::init(const char* title, int noOfItems){
	m_noOfItems = noOfItems;
	m_itemsAdded = 0;
	m_items = new Item[noOfItems];

	for (int i =0; i<noOfItems; i++){
		m_items[i].setEmpty();
	}

	return;
}

bool Bill::add(const char* item_name, double price, bool taxed){

	if (m_itemsAdded <= m_noOfItems) {
	m_items[m_itemsAdded].set(item_name, price,taxed);
	m_itemsAdded++;
	return true;
	}	
	else return false;
}

void Bill::display () const{
	
	for(int i=0;i<m_itemsAdded;i++){

		m_items[i].display();

		//return;
		//return;
		//return;
		//return;

	}
}

}
