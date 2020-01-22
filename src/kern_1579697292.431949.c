#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(490, "zeros");
	float **C = create_two_dim_float(890, 180, "zeros");
	float ***A = create_three_dim_float(480, 570, 620, "zeros");
	float ***D = create_three_dim_float(240, 960, 200, "zeros");

	for (int d = 1; d < 200; d++)
	  for (int c = 4; c < 565; c++)
	    for (int b = 1; b < 240; b++)
	      for (int a = 1; a < 240; a++)
	      {
	        
	       D[a][b][c]=D[a][b-4][c-1]+B[a]*A[a][b][c]-C[a][b];
	        
	       B[a]=B[a-1]-D[a][b][c]*C[a][b];
	        
	       A[a][b][c]=A[a+2][b+5][c]-0.524;
	        
	       B[a]=0.892;
	      }

    return 0;
}