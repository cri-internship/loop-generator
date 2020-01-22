#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(590, "zeros");
	int **B = create_two_dim_int(930, 230, "zeros");

	for (int c = 0; c < 230; c++)
	  for (int b = 3; b < 588; b++)
	    for (int a = 3; a < 588; a++)
	    {
	      
	      A[a]=A[a-3]*10;
	      
	      A[a]=A[a+2]+25;
	      
	      B[a][b]=B[a][b]-A[a];
	      A[a]=B[a+5][b]-A[a];
	    }

    return 0;
}