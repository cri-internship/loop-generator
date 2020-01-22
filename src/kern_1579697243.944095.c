#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(280, 80, 700, "zeros");
	int *C = create_one_dim_int(650, "zeros");
	int *A = create_one_dim_int(600, "zeros");
	int ***D = create_three_dim_int(830, 840, 30, "zeros");

	for (int c = 1; c < 600; c++)
	  for (int b = 1; b < 600; b++)
	    for (int a = 1; a < 600; a++)
	    {
	      
	      C[a]=C[a-1]/20;
	      
	      int var_a=A[a]*9;
	      int var_b=A[a-1]*10;
	    }

    return 0;
}