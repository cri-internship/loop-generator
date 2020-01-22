#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(690, 150, "ones");

	for (int d = 0; d < 145; d++)
	  for (int c = 0; c < 689; c++)
	    for (int b = 0; b < 689; b++)
	      for (int a = 0; a < 689; a++)
	      {
	        
	       int var_a=A[a][b]-38;
	       int var_b=A[a+1][b+5]+5;
	      }

    return 0;
}