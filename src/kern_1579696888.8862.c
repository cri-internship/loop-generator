#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(660, 450, "random");

	for (int d = 0; d < 445; d++)
	  for (int c = 0; c < 660; c++)
	    for (int b = 0; b < 660; b++)
	      for (int a = 0; a < 660; a++)
	      {
	        
	       int var_a=A[a][b]-40;
	       int var_b=A[a][b+5]*26;
	      }

    return 0;
}