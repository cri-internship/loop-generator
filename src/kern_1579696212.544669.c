#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(910, 480, "zeros");
	int *C = create_one_dim_int(130, "zeros");
	int **A = create_two_dim_int(800, 430, "zeros");
	int ***D = create_three_dim_int(370, 340, 700, "zeros");

	for (int c = 0; c < 430; c++)
	  for (int b = 1; b < 130; b++)
	    for (int a = 1; a < 130; a++)
	    {
	      
	      A[a][b]=A[a+4][b]+20;
	      
	      int var_a=C[a]/47;
	      int var_b=C[a-1]+33;
	    }

    return 0;
}