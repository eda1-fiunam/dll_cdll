
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
   DLL* list = DLL_New();

   DLL_Push_back( list, 7 );
   DLL_Push_back( list, 3 );
   DLL_Push_back( list, 5 );
   DLL_Push_back( list, 9 );
   DLL_Push_back( list, 8 );
   DLL_Push_back( list, 2 );
   DLL_Push_back( list, 5 );
   DLL_Push_back( list, 2 );
   DLL_PrintStructure( list );

// Reactivar cuando hayan codificado todas las funciones:
#if 0
   printf( "Valores menores a 5: " );
   DLL_Cursor_front( list );
   while( DLL_Find_if( list, less_than, 5 ) )
   {
      printf( "%d, ", DLL_Cursor_Get( list ) );
      DLL_Cursor_next( list );
   }
   printf( "\n" );

   DLL_Remove_if( list, less_than, 5 );
   DLL_PrintStructure( list );
#endif
   
   DLL_Delete( &list );
}
