#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(690, 270, "ones");
	int *A = create_one_dim_int(390, "ones");

	for (int c = 3; c < 270; c++)
	  for (int b = 5; b < 385; b++)
	    for (int a = 5; a < 385; a++)
	    {
	      
	      B[a][b]=B[a-5][b-3]+A[a];
	      
	      A[a]=A[a+1]*B[a][b];
	      
	      A[a]=A[a+5]/17;
	      
	      B[a][b]=A[a];
	    }

    return 0;
}