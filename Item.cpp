#include <iostream>
#include "cstring.h"
#include "Item.h"
using namespace std;
namespace sdds {

void Item::setEmpty(){
	m_itemName[0] = 0;
	m_price =0.0;

	return;

}

void Item::set(const char* name, double price, bool taxed) {


	strCpy(m_itemName, name);
	m_price = price;
	m_taxed = taxed;
	return;
}

void Item::display() const{

	cout<<m_itemName<<endl;
	cout<<m_price<<endl;
	cout<<m_taxed<<endl;
	return;

}

}
