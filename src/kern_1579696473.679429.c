#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(850, 290, 100, "random");
	float *D = create_one_dim_float(1000, "random");
	float **B = create_two_dim_float(910, 790, "random");
	float **C = create_two_dim_float(920, 680, "random");
	float ***A = create_three_dim_float(10, 710, 230, "random");

	for (int d = 3; d < 100; d++)
	  for (int c = 5; c < 290; c++)
	    for (int b = 4; b < 6; b++)
	      for (int a = 4; a < 6; a++)
	      {
	        
	       E[a][b][c]=E[a-4][b-5][c-3]-0.341;
	        
	       A[a][b][c]=A[a+4][b+4][c+4]+0.817;
	        
	       E[a][b][c]=E[a+3][b][c]*C[a][b];
	        
	       D[a]=D[a+2]+0.21;
	        
	       D[a]=E[a][b][c];
	      }

    return 0;
}