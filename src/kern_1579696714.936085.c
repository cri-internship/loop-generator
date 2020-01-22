#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(410, 320, 790, "random");
	double ***B = create_three_dim_double(480, 940, 610, "random");
	double *A = create_one_dim_double(500, "random");
	double *C = create_one_dim_double(810, "random");
	double ***D = create_three_dim_double(240, 810, 180, "random");

	for (int d = 1; d < 790; d++)
	  for (int c = 4; c < 320; c++)
	    for (int b = 4; b < 410; b++)
	      for (int a = 4; a < 410; a++)
	      {
	        
	       C[a]=C[a-4]*0.28;
	        
	       E[a][b][c]=E[a][b-1][c-1]-D[a][b][c]/B[a][b][c];
	        
	       C[a]=0.077;
	        
	       E[a][b][c]=0.288;
	        
	       D[a][b][c]=A[a]*E[a][b][c]/0.257-C[a]+E[a][b][c];
	       A[a]=A[a+1]/B[a][b][c]*C[a]+E[a][b][c]-0.715;
	      }

    return 0;
}