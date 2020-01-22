#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(510, 390, "zeros");
	float ***C = create_three_dim_float(130, 930, 580, "zeros");
	float **B = create_two_dim_float(720, 60, "zeros");
	float *E = create_one_dim_float(1000, "zeros");
	float *A = create_one_dim_float(370, "zeros");

	for (int d = 0; d < 58; d++)
	  for (int c = 0; c < 715; c++)
	    for (int b = 0; b < 715; b++)
	      for (int a = 0; a < 715; a++)
	      {
	        
	       E[a]=B[a][b]/D[a][b]-C[a][b][c]*A[a];
	       D[a][b]=E[a]/0.331;
	        
	       B[a][b]=E[a]-D[a][b];
	       B[a+5][b+2]=C[a][b][c]/E[a]+A[a]*D[a][b];
	        
	       float var_a=B[a][b]+0.669;
	       float var_b=B[a+1][b]-0.853;
	      }

    return 0;
}