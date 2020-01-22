#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(300, 830, 920, "ones");
	float **C = create_two_dim_float(310, 500, "ones");
	float *A = create_one_dim_float(590, "ones");
	float ***D = create_three_dim_float(620, 880, 520, "ones");

	for (int c = 5; c < 918; c++)
	  for (int b = 5; b < 825; b++)
	    for (int a = 5; a < 296; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-1][c-5]/0.887;
	      
	      B[a][b][c]=0.1+C[a][b];
	    }

    return 0;
}