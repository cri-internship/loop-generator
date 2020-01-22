#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(470, "zeros");
	int ***B = create_three_dim_int(580, 880, 790, "zeros");
	int *C = create_one_dim_int(360, "zeros");

	for (int d = 4; d < 786; d++)
	  for (int c = 3; c < 879; c++)
	    for (int b = 5; b < 360; b++)
	      for (int a = 5; a < 360; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-3][c-2]/C[a]-A[a];
	        
	       C[a]=C[a-5]/14;
	        
	       B[a][b][c]=B[a-1][b-2][c-4]+17;
	        
	       B[a][b][c]=B[a+4][b+1][c+4]-12;
	        
	       int var_a=A[a]/8;
	       int var_b=A[a-2]*44;
	        
	       B[a][b][c]=C[a]+B[a][b][c]*B[a][b][c];
	       A[a]=C[a]-B[a][b][c]*26;
	        
	       C[a]=A[a]+B[a][b][c];
	       B[a][b][c]=A[a-5]+C[a];
	      }

    return 0;
}