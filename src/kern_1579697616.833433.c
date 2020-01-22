#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(680, 650, "ones");
	float *A = create_one_dim_float(660, "ones");
	float ***C = create_three_dim_float(620, 910, 360, "ones");

	for (int d = 4; d < 355; d++)
	  for (int c = 1; c < 649; c++)
	    for (int b = 5; b < 617; b++)
	      for (int a = 5; a < 617; a++)
	      {
	        
	       A[a]=A[a-1]-B[a][b]+C[a][b][c];
	        
	       C[a][b][c]=C[a-5][b-1][c-4]+0.901;
	        
	       C[a][b][c]=C[a+3][b][c+2]+A[a];
	        
	       B[a][b]=B[a+1][b+1]-A[a];
	        
	       C[a][b][c]=C[a+1][b][c+5]-0.138;
	        
	       A[a]=A[a+3]+0.268;
	      }

    return 0;
}