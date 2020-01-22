#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(280, "random");
	int *B = create_one_dim_int(90, "random");

	for (int c = 5; c < 90; c++)
	  for (int b = 5; b < 90; b++)
	    for (int a = 5; a < 90; a++)
	    {
	      
	      B[a]=B[a-3]-A[a];
	      
	      A[a]=A[a-5]*6;
	      
	      int var_a=B[a]/1;
	      int var_b=B[a-2]-43;
	      
	      A[a]=A[a]-B[a];
	      B[a]=A[a-1]+40;
	    }

    return 0;
}