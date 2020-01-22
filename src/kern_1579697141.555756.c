#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(180, "ones");
	int *A = create_one_dim_int(120, "ones");

	for (int c = 5; c < 118; c++)
	  for (int b = 5; b < 118; b++)
	    for (int a = 5; a < 118; a++)
	    {
	      
	      A[a]=A[a-5]*17;
	      
	      B[a]=B[a-1]*A[a];
	      
	      B[a]=B[a+4]*31;
	      
	      A[a]=B[a];
	      
	      B[a]=B[a]*21;
	      A[a]=B[a+1]*30;
	      
	      int var_a=A[a]/34;
	      int var_b=A[a+2]+17;
	      
	      A[a]=B[a]+A[a];
	      A[a]=B[a-5]+A[a];
	    }

    return 0;
}