#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(620, "random");
	float *D = create_one_dim_float(600, "random");
	float ***A = create_three_dim_float(610, 550, 710, "random");
	float *E = create_one_dim_float(520, "random");
	float *C = create_one_dim_float(480, "random");

	for (int d = 0; d < 708; d++)
	  for (int c = 0; c < 545; c++)
	    for (int b = 3; b < 480; b++)
	      for (int a = 3; a < 480; a++)
	      {
	        
	       B[a]=B[a-1]*0.349;
	        
	       float var_a=C[a]/0.571;
	       C[a]=0.946;
	        
	       D[a]=D[a+5]-E[a]/B[a]+A[a][b][c]*C[a];
	        
	       A[a][b][c]=D[a]*0.141;
	       A[a+2][b+5][c+2]=D[a]*C[a]-0.592;
	        
	       D[a]=D[a]/A[a][b][c]*E[a]-C[a];
	       E[a]=D[a-3]-A[a][b][c]+E[a];
	      }

    return 0;
}