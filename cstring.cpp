#include "cstring.h"
#include <cstring>

namespace sdds {


void strCpy( char* s1, const char* s2){
	strcpy(s1,s2);
	return;
}

int strCmp( const char* s1, const char* s2){

int i=0;

for ( i=0; i <= 1000; i++) {

	if(s1[i] == s2[i] )
	{
		if (s1[i] == '\0') return 0;
		else continue;
	}
	else 
	{
		if (s1[i] > s2[i]) return 1;
		else return -1;
	}


}

return 0;

};

int strCmp( const char* s1, const char* s2, int len)
	
{
 return 0;	
}; 

}
