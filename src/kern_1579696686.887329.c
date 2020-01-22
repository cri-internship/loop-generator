#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(650, 20, "ones");
	int **B = create_two_dim_int(450, 710, "ones");

	for (int c = 5; c < 15; c++)
	  for (int b = 5; b < 446; b++)
	    for (int a = 5; a < 446; a++)
	    {
	      
	      B[a][b]=B[a-3][b-3]+A[a][b];
	      
	      B[a][b]=B[a-5][b-5]/30;
	      
	      A[a][b]=A[a][b+5]+B[a][b];
	      
	      B[a][b]=B[a+4][b+5]*19;
	      
	      A[a][b]=42;
	    }

    return 0;
}