#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(220, "random");
	float **A = create_two_dim_float(240, 470, "random");
	float **C = create_two_dim_float(30, 770, "random");
	float ***B = create_three_dim_float(600, 950, 680, "random");
	float *E = create_one_dim_float(230, "random");

	for (int d = 1; d < 680; d++)
	  for (int c = 4; c < 470; c++)
	    for (int b = 5; b < 227; b++)
	      for (int a = 5; a < 227; a++)
	      {
	        
	       E[a]=0.575;
	       float  var_a=E[a]-0.045;
	        
	       B[a][b][c]=B[a-4][b-4][c]/C[a][b]+D[a]*A[a][b]-E[a];
	        
	       B[a][b][c]=B[a-3][b-3][c-1]-0.048;
	        
	       E[a]=B[a][b][c]*0.831/C[a][b];
	        
	       float var_b=B[a][b][c]/0.981;
	       float var_c=B[a-5][b-1][c]*0.96;
	        
	       A[a][b]=A[a][b]+E[a]-D[a]/C[a][b]*B[a][b][c];
	       D[a]=A[a][b-3]/0.466-D[a]*E[a];
	        
	       C[a][b]=E[a]+C[a][b]-0.026*A[a][b]/D[a];
	       B[a][b][c]=E[a+3]-B[a][b][c];
	      }

    return 0;
}