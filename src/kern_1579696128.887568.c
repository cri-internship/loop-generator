#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(890, "ones");
	int **B = create_two_dim_int(920, 970, "ones");
	int *A = create_one_dim_int(800, "ones");

	for (int c = 0; c < 969; c++)
	  for (int b = 2; b < 887; b++)
	    for (int a = 2; a < 887; a++)
	    {
	      
	      C[a]=C[a-2]-A[a]+20;
	      
	      B[a][b]=B[a+1][b+1]/C[a];
	      
	      C[a]=C[a+3]+15;
	    }

    return 0;
}