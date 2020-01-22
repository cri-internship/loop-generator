#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(690, "random");
	float ***A = create_three_dim_float(740, 30, 760, "random");

	for (int c = 4; c < 686; c++)
	  for (int b = 4; b < 686; b++)
	    for (int a = 4; a < 686; a++)
	    {
	      
	      B[a]=B[a-3]*A[a][b][c];
	      
	      B[a]=B[a-4]+0.228;
	      
	      B[a]=B[a+4]*A[a][b][c];
	    }

    return 0;
}