#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(700, 110, 220, "random");
	float *B = create_one_dim_float(870, "random");

	for (int c = 5; c < 220; c++)
	  for (int b = 5; b < 110; b++)
	    for (int a = 3; a < 700; a++)
	    {
	      
	      A[a][b][c]=A[a][b-5][c-2]*0.766;
	      
	      B[a]=B[a-3]*0.763;
	      
	      B[a]=B[a-2]-0.112;
	      
	      B[a]=B[a-1]+0.873;
	      
	      B[a]=A[a][b][c]-B[a];
	      A[a][b][c]=A[a][b][c-5]+B[a];
	    }

    return 0;
}