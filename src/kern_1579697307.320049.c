#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(790, 610, 780, "zeros");
	int *B = create_one_dim_int(400, "zeros");
	int *D = create_one_dim_int(650, "zeros");
	int *A = create_one_dim_int(100, "zeros");

	for (int c = 5; c < 100; c++)
	  for (int b = 5; b < 100; b++)
	    for (int a = 5; a < 100; a++)
	    {
	      
	      A[a]=A[a-5]/B[a];
	      
	      int var_a=D[a]/8;
	      int var_b=D[a+4]-36;
	    }

    return 0;
}