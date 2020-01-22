#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(60, 170, "random");
	int *A = create_one_dim_int(530, "random");

	for (int d = 0; d < 170; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 4; b < 60; b++)
	      for (int a = 4; a < 60; a++)
	      {
	        
	       B[a][b]=B[a-4][b]+6;
	        
	       int var_a=A[a]+44;
	       int var_b=A[a-2]*39;
	      }

    return 0;
}