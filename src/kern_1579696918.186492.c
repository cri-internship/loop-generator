#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(390, 800, "zeros");
	float ***D = create_three_dim_float(340, 710, 190, "zeros");
	float **A = create_two_dim_float(730, 380, "zeros");
	float *B = create_one_dim_float(890, "zeros");

	for (int d = 4; d < 190; d++)
	  for (int c = 4; c < 380; c++)
	    for (int b = 5; b < 340; b++)
	      for (int a = 5; a < 340; a++)
	      {
	        
	       A[a][b]=A[a-3][b-3]+0.653;
	        
	       D[a][b][c]=D[a-1][b-4][c-4]/0.563;
	        
	       C[a][b]=C[a+3][b+1]-0.46;
	        
	       B[a]=0.193;
	       B[a+5]=0.2;
	        
	       D[a][b][c]=B[a]+0.362*C[a][b]/D[a][b][c];
	       A[a][b]=B[a-5]-C[a][b]+A[a][b];
	      }

    return 0;
}