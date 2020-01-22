#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(580, "random");
	int *A = create_one_dim_int(590, "random");
	int *B = create_one_dim_int(900, "random");

	for (int d = 4; d < 580; d++)
	  for (int c = 4; c < 580; c++)
	    for (int b = 4; b < 580; b++)
	      for (int a = 4; a < 580; a++)
	      {
	        
	       B[a]=B[a-4]+39;
	        
	       A[a]=A[a+3]-25;
	        
	       int var_a=C[a]/29;
	       int var_b=C[a-4]/44;
	      }

    return 0;
}