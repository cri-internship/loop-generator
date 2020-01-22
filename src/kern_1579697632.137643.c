#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(540, 840, "zeros");
	int *B = create_one_dim_int(570, "zeros");
	int *C = create_one_dim_int(840, "zeros");
	int *D = create_one_dim_int(20, "zeros");

	for (int d = 4; d < 20; d++)
	  for (int c = 4; c < 20; c++)
	    for (int b = 4; b < 20; b++)
	      for (int a = 4; a < 20; a++)
	      {
	        
	       C[a]=C[a-2]/47-B[a];
	        
	       B[a]=B[a+4]+C[a];
	        
	       B[a]=B[a+1]-D[a];
	        
	       int var_a=D[a]/16;
	       int var_b=D[a-4]/5;
	      }

    return 0;
}