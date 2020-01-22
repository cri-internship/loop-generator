#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(780, 950, "zeros");

	for (int c = 0; c < 949; c++)
	  for (int b = 0; b < 777; b++)
	    for (int a = 0; a < 777; a++)
	    {
	      
	      int var_a=A[a][b]-21;
	      A[a][b]=44;
	      
	      A[a][b]=32;
	    }

    return 0;
}