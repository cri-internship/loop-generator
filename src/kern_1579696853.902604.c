#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(190, 490, 700, "random");
	float *E = create_one_dim_float(530, "random");
	float **B = create_two_dim_float(160, 10, "random");
	float ***D = create_three_dim_float(280, 250, 740, "random");
	float ***C = create_three_dim_float(300, 940, 30, "random");

	for (int d = 4; d < 28; d++)
	  for (int c = 3; c < 6; c++)
	    for (int b = 5; b < 157; b++)
	      for (int a = 5; a < 157; a++)
	      {
	        
	       B[a][b]=B[a+3][b+4]/D[a][b][c]-E[a]+C[a][b][c]*0.326;
	        
	       float var_a=E[a]/0.666;
	       E[a]=0.218;
	        
	       float var_b=C[a][b][c]-0.705;
	       float var_c=C[a+2][b+1][c+2]*0.245;
	        
	       E[a]=A[a][b][c]-B[a][b]/D[a][b][c]+C[a][b][c]*E[a];
	       D[a][b][c]=A[a-5][b-3][c-4]+E[a];
	      }

    return 0;
}