#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(950, "ones");
	int *B = create_one_dim_int(190, "ones");

	for (int c = 5; c < 190; c++)
	  for (int b = 5; b < 190; b++)
	    for (int a = 5; a < 190; a++)
	    {
	      
	      A[a]=A[a-5]/4;
	      
	      B[a]=A[a]/B[a];
	      
	      B[a]=B[a-1]-3;
	      
	      A[a]=A[a+2]+28;
	      
	      int var_a=A[a]/10;
	      
	      A[a]=A[a]+B[a];
	      A[a]=A[a+4]*B[a];
	      
	      B[a]=B[a]/A[a];
	    }

    return 0;
}