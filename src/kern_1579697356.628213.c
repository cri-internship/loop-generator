#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(650, 690, "zeros");
	float ***B = create_three_dim_float(170, 730, 310, "zeros");

	for (int d = 0; d < 310; d++)
	  for (int c = 5; c < 689; c++)
	    for (int b = 1; b < 169; b++)
	      for (int a = 1; a < 169; a++)
	      {
	        
	       A[a][b]=A[a-1][b-5]/B[a][b][c];
	        
	       A[a][b]=A[a+3][b+1]+0.4;
	        
	       B[a][b][c]=0.792;
	       B[a+1][b+2][c]=0.013;
	      }

    return 0;
}