#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(330, 980, 320, "ones");
	float *D = create_one_dim_float(500, "ones");
	float ***C = create_three_dim_float(420, 300, 460, "ones");
	float *A = create_one_dim_float(570, "ones");

	for (int d = 5; d < 319; d++)
	  for (int c = 1; c < 295; c++)
	    for (int b = 4; b < 327; b++)
	      for (int a = 4; a < 327; a++)
	      {
	        
	       D[a]=D[a-3]-C[a][b][c];
	        
	       C[a][b][c]=C[a][b+5][c+4]-0.484;
	        
	       D[a]=D[a+2]*A[a]-B[a][b][c]+C[a][b][c];
	        
	       B[a][b][c]=0.949;
	       B[a-1][b-1][c-5]=0.267;
	        
	       float var_a=D[a]/0.796;
	       float var_b=D[a-4]+0.638;
	        
	       A[a]=B[a][b][c]*D[a];
	       D[a]=B[a+3][b+4][c+1]+A[a]/D[a];
	      }

    return 0;
}