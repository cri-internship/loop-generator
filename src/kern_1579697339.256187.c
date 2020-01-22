#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(300, 750, 710, "zeros");
	float *D = create_one_dim_float(840, "zeros");
	float ***B = create_three_dim_float(770, 200, 270, "zeros");
	float *C = create_one_dim_float(330, "zeros");
	float ***A = create_three_dim_float(580, 30, 90, "zeros");

	for (int d = 3; d < 88; d++)
	  for (int c = 5; c < 29; c++)
	    for (int b = 3; b < 330; b++)
	      for (int a = 3; a < 330; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-5][c-3]*0.178;
	        
	       C[a]=C[a-3]*0.032;
	        
	       C[a]=C[a-2]-0.608;
	        
	       A[a][b][c]=A[a-1][b-5][c-3]-D[a]+B[a][b][c]*0.57;
	        
	       D[a]=D[a+1]-0.865;
	        
	       D[a]=A[a][b][c]-E[a][b][c];
	       C[a]=A[a+3][b+1][c+2]/E[a][b][c]*D[a];
	        
	       A[a][b][c]=D[a]/A[a][b][c]*A[a][b][c];
	      }

    return 0;
}