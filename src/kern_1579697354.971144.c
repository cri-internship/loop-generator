#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(410, 380, "ones");
	float ***D = create_three_dim_float(190, 1000, 70, "ones");
	float *B = create_one_dim_float(660, "ones");
	float **C = create_two_dim_float(540, 750, "ones");

	for (int c = 1; c < 66; c++)
	  for (int b = 5; b < 378; b++)
	    for (int a = 4; a < 185; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b+3][c+4]+0.331;
	      
	      D[a][b][c]=D[a+2][b+4][c]+C[a][b];
	      
	      A[a][b]=A[a+3][b+2]-D[a][b][c]*D[a][b][c]+B[a];
	      
	      A[a][b]=B[a]-A[a][b];
	      B[a]=B[a+5]/0.919;
	      
	      C[a][b]=D[a][b][c]+0.848;
	      D[a][b][c]=D[a-4][b-5][c-1]+C[a][b]/0.656;
	    }

    return 0;
}