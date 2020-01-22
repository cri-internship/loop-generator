#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(40, 610, "ones");
	float *C = create_one_dim_float(670, "ones");
	float ***A = create_three_dim_float(970, 220, 60, "ones");
	float ***D = create_three_dim_float(420, 800, 900, "ones");

	for (int d = 2; d < 899; d++)
	  for (int c = 4; c < 609; c++)
	    for (int b = 4; b < 38; b++)
	      for (int a = 4; a < 38; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-3][c-1]+0.759;
	        
	       B[a][b]=B[a+2][b+1]-A[a][b][c];
	        
	       float var_a=B[a][b]*0.863;
	       float var_b=B[a+1][b+1]/0.817;
	        
	       C[a]=D[a][b][c]*C[a]-B[a][b];
	       A[a][b][c]=D[a+2][b+3][c+1]+C[a]*0.987;
	        
	       float var_c=D[a][b][c]/0.992;
	       float var_d=D[a][b-3][c-2]/0.775;
	        
	       B[a][b]=D[a][b][c]-0.394;
	       D[a][b][c]=D[a-4][b-4][c-2]+B[a][b]-A[a][b][c];
	      }

    return 0;
}