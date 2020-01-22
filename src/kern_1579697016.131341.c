#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(370, 430, "random");
	double *A = create_one_dim_double(130, "random");
	double **E = create_two_dim_double(1000, 990, "random");
	double ***C = create_three_dim_double(970, 450, 210, "random");
	double **D = create_two_dim_double(680, 600, "random");

	for (int d = 0; d < 207; d++)
	  for (int c = 5; c < 450; c++)
	    for (int b = 2; b < 676; b++)
	      for (int a = 2; a < 676; a++)
	      {
	        
	       E[a][b]=E[a+4][b+4]+0.435/A[a]-C[a][b][c]*B[a][b];
	        
	       D[a][b]=D[a+4][b+3]*E[a][b]-A[a];
	        
	       E[a][b]=0.839;
	        
	       C[a][b][c]=0.198;
	       C[a+5][b][c+3]=0.795;
	        
	       double var_a=D[a][b]-0.158;
	       double var_b=D[a][b-5]+0.705;
	        
	       D[a][b]=D[a][b]-E[a][b];
	       E[a][b]=D[a-2][b-3]/0.936-E[a][b]*A[a];
	      }

    return 0;
}