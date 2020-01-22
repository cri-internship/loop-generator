#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(940, "zeros");
	int ***B = create_three_dim_int(850, 30, 460, "zeros");

	for (int d = 1; d < 456; d++)
	  for (int c = 3; c < 27; c++)
	    for (int b = 4; b < 848; b++)
	      for (int a = 4; a < 848; a++)
	      {
	        
	       A[a]=A[a-4]+B[a][b][c];
	        
	       B[a][b][c]=B[a+2][b][c+1]/A[a];
	        
	       B[a][b][c]=B[a+1][b+3][c+1]/13;
	        
	       A[a]=B[a][b][c]/24;
	       B[a][b][c]=B[a+1][b+3][c+4]-A[a];
	        
	       int var_a=B[a][b][c]/32;
	       int var_b=B[a-1][b-3][c-1]/26;
	      }

    return 0;
}