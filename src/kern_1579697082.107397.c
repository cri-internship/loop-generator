#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(900, 350, "zeros");

	for (int d = 2; d < 348; d++)
	  for (int c = 0; c < 898; c++)
	    for (int b = 0; b < 898; b++)
	      for (int a = 0; a < 898; a++)
	      {
	        
	       A[a][b]=49;
	       A[a+2][b+2]=18;
	        
	       int var_a=A[a][b]-0;
	       int var_b=A[a][b-2]/49;
	      }

    return 0;
}