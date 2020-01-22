#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(620, 100, 310, "zeros");
	float *C = create_one_dim_float(550, "zeros");
	float **B = create_two_dim_float(510, 940, "zeros");

	for (int c = 5; c < 310; c++)
	  for (int b = 5; b < 100; b++)
	    for (int a = 3; a < 550; a++)
	    {
	      
	      C[a]=C[a-3]-A[a][b][c];
	      
	      A[a][b][c]=A[a-3][b-5][c-5]*C[a]/B[a][b];
	      
	      C[a]=B[a][b]/A[a][b][c];
	    }

    return 0;
}