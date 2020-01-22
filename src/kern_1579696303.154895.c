#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(500, 820, 450, "random");
	float ***D = create_three_dim_float(460, 400, 920, "random");
	float *C = create_one_dim_float(880, "random");
	float **B = create_two_dim_float(320, 130, "random");

	for (int d = 5; d < 445; d++)
	  for (int c = 0; c < 400; c++)
	    for (int b = 5; b < 458; b++)
	      for (int a = 5; a < 458; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b+5][c+5]*C[a];
	        
	       C[a]=B[a][b]-A[a][b][c];
	       C[a]=D[a][b][c]/D[a][b][c]-A[a][b][c];
	        
	       A[a][b][c]=D[a][b][c]/0.863;
	        
	       D[a][b][c]=0.07;
	       D[a][b][c-5]=0.364;
	        
	       C[a]=D[a][b][c]*A[a][b][c];
	       D[a][b][c]=D[a-5][b][c-4]-0.384+A[a][b][c]/C[a];
	        
	       float var_a=D[a][b][c]-0.551;
	       float var_b=D[a+2][b][c+3]+0.808;
	      }

    return 0;
}