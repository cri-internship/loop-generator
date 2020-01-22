#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(780, 390, 190, "ones");
	int **A = create_two_dim_int(760, 380, "ones");
	int *C = create_one_dim_int(80, "ones");
	int **B = create_two_dim_int(80, 120, "ones");
	int *D = create_one_dim_int(70, "ones");

	for (int d = 0; d < 69; d++)
	  for (int c = 0; c < 69; c++)
	    for (int b = 0; b < 69; b++)
	      for (int a = 0; a < 69; a++)
	      {
	        
	       D[a]=43;
	       D[a+1]=48;
	      }

    return 0;
}