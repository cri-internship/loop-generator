#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(670, "zeros");
	float ***A = create_three_dim_float(170, 160, 870, "zeros");

	for (int c = 4; c < 666; c++)
	  for (int b = 4; b < 666; b++)
	    for (int a = 4; a < 666; a++)
	    {
	      
	      B[a]=B[a-4]/A[a][b][c];
	      
	      B[a]=0.649;
	      
	      B[a]=B[a]+A[a][b][c];
	      A[a][b][c]=B[a-3]-A[a][b][c];
	    }

    return 0;
}