#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(980, "zeros");
	float *E = create_one_dim_float(350, "zeros");
	float **B = create_two_dim_float(860, 780, "zeros");
	float *A = create_one_dim_float(300, "zeros");
	float ***C = create_three_dim_float(400, 710, 50, "zeros");

	for (int d = 0; d < 775; d++)
	  for (int c = 5; c < 300; c++)
	    for (int b = 5; b < 300; b++)
	      for (int a = 5; a < 300; a++)
	      {
	        
	       A[a]=A[a-5]-0.956;
	        
	       D[a]=B[a][b]*C[a][b][c];
	       B[a][b]=D[a]*E[a]+A[a];
	        
	       D[a]=D[a-5]/E[a]*A[a]-B[a][b];
	        
	       B[a][b]=B[a+5][b+5]*0.952;
	        
	       E[a]=0.85;
	       E[a-5]=0.601;
	        
	       D[a]=D[a]/E[a]*A[a]+C[a][b][c]-B[a][b];
	       A[a]=D[a+2]*A[a];
	      }

    return 0;
}