#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(690, 760, 140, "zeros");
	float *A = create_one_dim_float(710, "zeros");
	float **C = create_two_dim_float(370, 230, "zeros");

	for (int c = 0; c < 138; c++)
	  for (int b = 0; b < 755; b++)
	    for (int a = 3; a < 689; a++)
	    {
	      
	      A[a]=A[a-3]*B[a][b][c];
	      
	      B[a][b][c]=B[a+1][b+5][c+2]*0.53;
	    }

    return 0;
}