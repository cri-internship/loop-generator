#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(590, 310, 530, "ones");
	double **A = create_two_dim_double(260, 160, "ones");

	for (int d = 3; d < 158; d++)
	  for (int c = 3; c < 255; c++)
	    for (int b = 3; b < 255; b++)
	      for (int a = 3; a < 255; a++)
	      {
	        
	       A[a][b]=A[a-3][b-3]*B[a][b][c];
	        
	       A[a][b]=A[a+5][b+2]/B[a][b][c];
	      }

    return 0;
}