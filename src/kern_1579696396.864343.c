#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(980, "ones");
	int **B = create_two_dim_int(330, 90, "ones");

	for (int c = 4; c < 85; c++)
	  for (int b = 4; b < 325; b++)
	    for (int a = 4; a < 325; a++)
	    {
	      
	      B[a][b]=B[a-1][b-4]-A[a];
	      
	      A[a]=A[a-4]-B[a][b];
	      
	      B[a][b]=B[a-4][b-1]-14;
	      
	      B[a][b]=B[a+5][b+3]-14;
	      
	      int var_a=B[a][b]-2;
	      int var_b=B[a+5][b+5]*48;
	    }

    return 0;
}