#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(330, "random");
	int **B = create_two_dim_int(640, 160, "random");

	for (int c = 2; c < 156; c++)
	  for (int b = 3; b < 329; b++)
	    for (int a = 3; a < 329; a++)
	    {
	      
	      B[a][b]=B[a-3][b-2]+0;
	      
	      int var_a=B[a][b]-22;
	      int var_b=B[a+1][b+4]*23;
	      
	      A[a]=A[a]/15;
	      B[a][b]=A[a+1]*B[a][b];
	    }

    return 0;
}