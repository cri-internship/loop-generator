#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(770, 570, "zeros");
	float *B = create_one_dim_float(160, "zeros");
	float ***C = create_three_dim_float(40, 770, 210, "zeros");
	float ***D = create_three_dim_float(280, 90, 100, "zeros");

	for (int b = 4; b < 90; b++)
	  for (int a = 5; a < 36; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-4][a]/0.042;
	    
	     C[a][b][a]=C[a-5][b][a-2]-D[a][b][a];
	    
	     C[a][b][a]=C[a+4][b][a+4]-0.051;
	    
	     B[a]=0.208;
	     B[a-2]=0.944;
	    
	     B[a]=C[a][b][a]/D[a][b][a];
	    
	     B[a]=C[a][b][a]/0.67-D[a][b][a];
	     A[a][b]=C[a-4][b-3][a]+A[a][b]*B[a];
	  }

    return 0;
}