#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(390, 450, 930, "zeros");
	float ***A = create_three_dim_float(920, 480, 280, "zeros");
	float ***C = create_three_dim_float(650, 980, 430, "zeros");
	float *D = create_one_dim_float(340, "zeros");
	float *E = create_one_dim_float(130, "zeros");

	for (int d = 4; d < 280; d++)
	  for (int c = 3; c < 446; c++)
	    for (int b = 4; b < 387; b++)
	      for (int a = 4; a < 387; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-2][c-2]-0.518;
	        
	       B[a][b][c]=B[a+2][b+1][c+4]/D[a]+0.012;
	        
	       B[a][b][c]=B[a+3][b+4][c+5]/0.982;
	        
	       A[a][b][c]=B[a][b][c]/E[a];
	       A[a-4][b-3][c-4]=D[a]+C[a][b][c]*E[a];
	        
	       C[a][b][c]=A[a][b][c]+A[a][b][c]/E[a]*D[a];
	      }

    return 0;
}