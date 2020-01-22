#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(620, "zeros");
	float ***C = create_three_dim_float(770, 970, 920, "zeros");
	float **D = create_two_dim_float(720, 430, "zeros");
	float **E = create_two_dim_float(560, 80, "zeros");
	float ***A = create_three_dim_float(120, 960, 250, "zeros");

	for (int d = 0; d < 245; d++)
	  for (int c = 5; c < 80; c++)
	    for (int b = 5; b < 115; b++)
	      for (int a = 5; a < 115; a++)
	      {
	        
	       B[a]=B[a-3]/0.244;
	        
	       C[a][b][c]=C[a-4][b][c]*0.059;
	        
	       E[a][b]=0.694;
	       E[a-5][b]=0.196;
	        
	       D[a][b]=C[a][b][c]-E[a][b]+A[a][b][c];
	       D[a][b-5]=B[a]/E[a][b]+B[a]*A[a][b][c];
	        
	       E[a][b]=D[a][b]+E[a][b]/A[a][b][c]-B[a]*C[a][b][c];
	       A[a][b][c]=D[a+5][b+3]/0.488*B[a]+E[a][b];
	        
	       float var_a=E[a][b]+0.21;
	       float var_b=E[a-4][b-2]/0.405;
	        
	       B[a]=A[a][b][c]*0.919+B[a];
	       D[a][b]=A[a+5][b+5][c+5]-D[a][b]+0.237*E[a][b];
	      }

    return 0;
}