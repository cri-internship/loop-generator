#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(10, "ones");
	float ***A = create_three_dim_float(690, 20, 180, "ones");
	float *C = create_one_dim_float(340, "ones");
	float ***E = create_three_dim_float(940, 720, 250, "ones");
	float **B = create_two_dim_float(870, 580, "ones");

	for (int d = 0; d < 180; d++)
	  for (int c = 0; c < 20; c++)
	    for (int b = 4; b < 10; b++)
	      for (int a = 4; a < 10; a++)
	      {
	        
	       D[a]=D[a-2]/0.152;
	        
	       C[a]=C[a-2]+0.62;
	        
	       A[a][b][c]=A[a-4][b][c]*0.694;
	        
	       E[a][b][c]=C[a]/D[a];
	       E[a+4][b+5][c]=A[a][b][c]*B[a][b];
	        
	       E[a][b][c]=C[a];
	        
	       A[a][b][c]=B[a][b]+E[a][b][c]*A[a][b][c]/E[a][b][c]-C[a];
	       D[a]=B[a+1][b+3]+E[a][b][c]*C[a];
	        
	       E[a][b][c]=E[a][b][c]*A[a][b][c]-C[a]/B[a][b]+D[a];
	       C[a]=E[a][b][c+3]*D[a]-A[a][b][c];
	      }

    return 0;
}