#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(820, 990, 390, "ones");
	float ***A = create_three_dim_float(10, 40, 600, "ones");

	for (int d = 3; d < 390; d++)
	  for (int c = 3; c < 38; c++)
	    for (int b = 3; b < 7; b++)
	      for (int a = 3; a < 7; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-2][c-2]/0.795;
	        
	       A[a][b][c]=0.447;
	       A[a-1][b-3][c-3]=0.135;
	        
	       B[a][b][c]=A[a][b][c]-B[a][b][c];
	       A[a][b][c]=A[a+3][b+2][c+5]+B[a][b][c];
	      }

    return 0;
}