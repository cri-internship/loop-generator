#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(70, "ones");
	int **A = create_two_dim_int(910, 540, "ones");

	for (int c = 0; c < 539; c++)
	  for (int b = 3; b < 70; b++)
	    for (int a = 3; a < 70; a++)
	    {
	      
	      B[a]=B[a-1]-9;
	      
	      B[a]=B[a-2]-A[a][b];
	      
	      B[a]=B[a-3]/40;
	      
	      A[a][b]=A[a+2][b]-3;
	      
	      A[a][b]=42;
	    }

    return 0;
}