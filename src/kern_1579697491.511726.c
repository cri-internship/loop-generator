#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(530, 130, 580, "random");
	float ***C = create_three_dim_float(610, 170, 20, "random");
	float ***A = create_three_dim_float(990, 950, 620, "random");
	float *B = create_one_dim_float(270, "random");

	for (int d = 5; d < 20; d++)
	  for (int c = 2; c < 129; c++)
	    for (int b = 3; b < 270; b++)
	      for (int a = 3; a < 270; a++)
	      {
	        
	       D[a][b][c]=D[a][b-2][c-4]*A[a][b][c];
	        
	       B[a]=B[a-3]-C[a][b][c]*D[a][b][c]+C[a][b][c];
	        
	       D[a][b][c]=D[a+1][b+1][c+3]-B[a];
	        
	       A[a][b][c]=A[a+1][b+4][c+2]*0.335;
	        
	       A[a][b][c]=B[a]*C[a][b][c]/0.205;
	        
	       float var_a=C[a][b][c]*0.596;
	       float var_b=C[a-3][b][c-5]/0.066;
	      }

    return 0;
}