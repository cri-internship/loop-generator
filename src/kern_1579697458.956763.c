#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(360, "ones");
	float ***C = create_three_dim_float(210, 290, 130, "ones");
	float *D = create_one_dim_float(580, "ones");
	float ***B = create_three_dim_float(590, 510, 140, "ones");

	for (int c = 4; c < 130; c++)
	  for (int b = 1; b < 290; b++)
	    for (int a = 5; a < 210; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c-4]+0.659;
	      
	      D[a]=D[a-3]-0.813;
	      
	      D[a]=D[a-5]+0.09;
	      
	      A[a]=C[a][b][c]+D[a]/A[a]*B[a][b][c];
	      D[a]=C[a][b][c-2]+A[a];
	    }

    return 0;
}