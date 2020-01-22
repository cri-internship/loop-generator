#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(840, 370, 300, "ones");
	int *A = create_one_dim_int(90, "ones");
	int ***D = create_three_dim_int(50, 220, 700, "ones");
	int *B = create_one_dim_int(680, "ones");
	int *E = create_one_dim_int(800, "ones");

	for (int c = 3; c < 87; c++)
	  for (int b = 3; b < 87; b++)
	    for (int a = 3; a < 87; a++)
	    {
	      
	      A[a]=A[a+3]+28;
	      
	      B[a]=3;
	      B[a-3]=22;
	      
	      int var_a=E[a]+3;
	      int var_b=E[a+2]/14;
	    }

    return 0;
}