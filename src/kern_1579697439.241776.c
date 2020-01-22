#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(720, 180, 760, "random");

	for (int b = 0; b < 177; b++)
	  for (int a = 0; a < 718; a++)
	  {
	    
	     A[a][b][a]=2;
	     A[a][b+3][a+2]=42;
	  }

    return 0;
}