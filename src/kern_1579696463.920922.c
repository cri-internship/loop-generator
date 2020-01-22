#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(600, "random");
	double **D = create_two_dim_double(540, 480, "random");
	double *A = create_one_dim_double(480, "random");
	double ***B = create_three_dim_double(480, 410, 980, "random");

	for (int d = 0; d < 980; d++)
	  for (int c = 5; c < 410; c++)
	    for (int b = 4; b < 480; b++)
	      for (int a = 4; a < 480; a++)
	      {
	        
	       D[a][b]=D[a-2][b-3]/0.76;
	        
	       C[a]=C[a-1]/A[a];
	        
	       A[a]=0.73;
	       float  var_a=A[a]/0.333;
	        
	       B[a][b][c]=B[a-1][b-5][c]/0.301;
	        
	       D[a][b]=0.989;
	        
	       C[a]=D[a][b]*B[a][b][c];
	        
	       B[a][b][c]=D[a][b]-C[a];
	       C[a]=D[a+3][b]*C[a];
	      }

    return 0;
}