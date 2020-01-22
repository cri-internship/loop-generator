#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(450, 30, "random");
	double ***A = create_three_dim_double(530, 460, 950, "random");

	for (int d = 5; d < 950; d++)
	  for (int c = 0; c < 460; c++)
	    for (int b = 3; b < 530; b++)
	      for (int a = 3; a < 530; a++)
	      {
	        
	       A[a][b][c]=0.739;
	       A[a-3][b][c-5]=0.815;
	      }

    return 0;
}