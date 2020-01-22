#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(880, 470, 580, "ones");
	float *E = create_one_dim_float(870, "ones");
	float *A = create_one_dim_float(580, "ones");
	float **B = create_two_dim_float(140, 510, "ones");
	float **C = create_two_dim_float(290, 740, "ones");

	for (int d = 3; d < 579; d++)
	  for (int c = 3; c < 469; c++)
	    for (int b = 3; b < 286; b++)
	      for (int a = 3; a < 286; a++)
	      {
	        
	       float var_a=E[a]/0.256;
	       E[a]=0.546;
	        
	       E[a]=E[a+5]*0.54;
	        
	       C[a][b]=C[a+4][b+1]*A[a]-0.006+E[a];
	        
	       A[a]=B[a][b]*C[a][b]-E[a];
	       A[a+4]=D[a][b][c]*B[a][b];
	        
	       E[a]=D[a][b][c]*A[a]+0.964;
	       D[a][b][c]=D[a][b+1][c+1]*C[a][b]+A[a]/B[a][b];
	        
	       float var_b=D[a][b][c]*0.62;
	       float var_c=D[a-3][b-3][c-3]+0.92;
	      }

    return 0;
}