#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(780, "random");
	float ***D = create_three_dim_float(560, 670, 70, "random");
	float **C = create_two_dim_float(780, 500, "random");
	float *B = create_one_dim_float(280, "random");
	float ***A = create_three_dim_float(660, 880, 90, "random");

	for (int d = 5; d < 67; d++)
	  for (int c = 1; c < 497; c++)
	    for (int b = 4; b < 558; b++)
	      for (int a = 4; a < 558; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b][c-5]*0.724;
	        
	       A[a][b][c]=E[a]/D[a][b][c]+A[a][b][c]*C[a][b]-B[a];
	       E[a]=A[a][b][c];
	        
	       C[a][b]=C[a][b+3]+0.449;
	        
	       float var_a=D[a][b][c]+0.042;
	       float var_b=D[a+2][b+4][c+3]/0.316;
	        
	       D[a][b][c]=A[a][b][c]-E[a]/B[a]+0.47*E[a];
	       B[a]=A[a-1][b-1][c]-B[a]+C[a][b]*E[a]/D[a][b][c];
	      }

    return 0;
}