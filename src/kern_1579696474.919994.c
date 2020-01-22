#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(750, 260, 140, "zeros");

	for (int b = 0; b < 258; b++)
	  for (int a = 0; a < 747; a++)
	  {
	    
	     A[a][b][a]=37;
	     A[a+3][b+2][a+3]=28;
	  }

    return 0;
}