#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(620, "zeros");
	float ***C = create_three_dim_float(240, 880, 650, "zeros");
	float ***A = create_three_dim_float(550, 430, 180, "zeros");

	for (int d = 5; d < 180; d++)
	  for (int c = 4; c < 427; c++)
	    for (int b = 2; b < 236; b++)
	      for (int a = 2; a < 236; a++)
	      {
	        
	       B[a]=B[a-1]-A[a][b][c];
	        
	       A[a][b][c]=A[a][b+3][c]-B[a]*C[a][b][c];
	        
	       B[a]=B[a+1]-0.046;
	        
	       C[a][b][c]=0.38;
	       C[a+4][b+3][c+4]=0.713;
	        
	       C[a][b][c]=A[a][b][c]-B[a]+C[a][b][c];
	       A[a][b][c]=A[a-2][b-4][c-5]/B[a]+C[a][b][c];
	      }

    return 0;
}