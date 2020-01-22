#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(550, 150, 190, "ones");
	float **A = create_two_dim_float(490, 200, "ones");

	for (int d = 0; d < 189; d++)
	  for (int c = 0; c < 146; c++)
	    for (int b = 0; b < 485; b++)
	      for (int a = 0; a < 485; a++)
	      {
	        
	       A[a][b]=A[a+5][b+2]*0.565;
	        
	       B[a][b][c]=B[a][b][c+1]-0.934;
	        
	       B[a][b][c]=B[a][b][c]-A[a][b];
	       A[a][b]=B[a+5][b+4][c]/A[a][b];
	      }

    return 0;
}