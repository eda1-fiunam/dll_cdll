
#include <stdio.h>
// para printf


#include <stdlib.h>
// para malloc and friends y size_t

#include <stdbool.h>
// para bool and friends

#include "DLL.h"

#include "defs.h"

// función para inyectar en algunas operaciones de la lista:
void Print( int item )
{
   printf( "%d\n", item );
}

// función predicado:
bool less_than( int list_val, int user_val )
{ 
   return list_val < user_val;
}




//----------------------------------------------------------------------
//  Driver program
//----------------------------------------------------------------------
int main(void)
{
   DLL* unaLista = DLL_New();
   
   DLL_Delete( &unaLista );
}
