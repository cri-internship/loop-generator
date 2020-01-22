#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(470, "ones");
	float ***B = create_three_dim_float(280, 130, 410, "ones");

	for (int d = 4; d < 407; d++)
	  for (int c = 3; c < 126; c++)
	    for (int b = 4; b < 278; b++)
	      for (int a = 4; a < 278; a++)
	      {
	        
	       A[a]=A[a-1]+0.195;
	        
	       B[a][b][c]=B[a-4][b-3][c-1]/A[a];
	        
	       B[a][b][c]=B[a-3][b][c-4]+A[a];
	        
	       B[a][b][c]=B[a+1][b+3][c+1]*0.571;
	        
	       A[a]=A[a+4]+0.532;
	        
	       B[a][b][c]=B[a+2][b+4][c+3]+0.155;
	        
	       B[a][b][c]=A[a]/B[a][b][c];
	       A[a]=A[a-4]+B[a][b][c];
	      }

    return 0;
}