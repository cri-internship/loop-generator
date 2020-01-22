#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(200, 440, "zeros");
	int *B = create_one_dim_int(800, "zeros");
	int **A = create_two_dim_int(190, 280, "zeros");

	for (int d = 4; d < 440; d++)
	  for (int c = 4; c < 200; c++)
	    for (int b = 4; b < 200; b++)
	      for (int a = 4; a < 200; a++)
	      {
	        
	       int var_a=C[a][b]*48;
	       int var_b=C[a-4][b-4]+36;
	      }

    return 0;
}