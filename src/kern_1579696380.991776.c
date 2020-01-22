#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(550, 890, 880, "random");
	double **B = create_two_dim_double(840, 220, "random");

	for (int d = 0; d < 875; d++)
	  for (int c = 0; c < 218; c++)
	    for (int b = 0; b < 547; b++)
	      for (int a = 0; a < 547; a++)
	      {
	        
	       B[a][b]=B[a+5][b+2]/A[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+5][c+5]*0.225;
	      }

    return 0;
}