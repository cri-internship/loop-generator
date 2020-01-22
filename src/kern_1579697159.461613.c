#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(330, 460, "ones");
	int **A = create_two_dim_int(520, 750, "ones");

	for (int c = 4; c < 456; c++)
	  for (int b = 3; b < 325; b++)
	    for (int a = 3; a < 325; a++)
	    {
	      
	      A[a][b]=A[a-3][b-2]+45;
	      
	      A[a][b]=A[a][b-4]-40;
	      
	      A[a][b]=A[a+1][b+1]/41;
	      
	      B[a][b]=6;
	      B[a-2][b-1]=5;
	      
	      B[a][b]=B[a][b]+A[a][b];
	      A[a][b]=B[a-3][b]/A[a][b];
	      
	      int var_a=B[a][b]*7;
	      int var_b=B[a+5][b+4]-9;
	    }

    return 0;
}