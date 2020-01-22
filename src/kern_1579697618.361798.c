#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(310, "zeros");
	float *C = create_one_dim_float(950, "zeros");
	float ***B = create_three_dim_float(270, 690, 430, "zeros");
	float *A = create_one_dim_float(80, "zeros");

	for (int d = 2; d < 428; d++)
	  for (int c = 2; c < 687; c++)
	    for (int b = 5; b < 80; b++)
	      for (int a = 5; a < 80; a++)
	      {
	        
	       C[a]=C[a-3]+0.609;
	        
	       A[a]=A[a-5]+C[a]*B[a][b][c]/D[a];
	        
	       B[a][b][c]=B[a-4][b-2][c-2]*A[a]-A[a];
	        
	       C[a]=D[a]+A[a];
	        
	       B[a][b][c]=B[a+1][b+3][c+2]*C[a];
	        
	       D[a]=D[a+2]*0.736-C[a]/A[a];
	      }

    return 0;
}