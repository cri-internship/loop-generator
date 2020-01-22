#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(230, 280, "random");
	double **D = create_two_dim_double(330, 130, "random");
	double *E = create_one_dim_double(100, "random");
	double **C = create_two_dim_double(900, 850, "random");
	double ***A = create_three_dim_double(720, 280, 640, "random");

	for (int d = 5; d < 125; d++)
	  for (int c = 1; c < 226; c++)
	    for (int b = 1; b < 226; b++)
	      for (int a = 1; a < 226; a++)
	      {
	        
	       C[a][b]=C[a][b-3]+E[a];
	        
	       B[a][b]=B[a+4][b+3]/0.486;
	        
	       C[a][b]=C[a+5][b+3]/0.746;
	        
	       D[a][b]=D[a+2][b+5]-0.476;
	        
	       B[a][b]=C[a][b]*B[a][b]-D[a][b]+A[a][b][c];
	       C[a][b]=C[a-1][b-5]*E[a]-D[a][b]+A[a][b][c];
	      }

    return 0;
}