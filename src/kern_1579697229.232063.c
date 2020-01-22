#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(150, 310, "zeros");
	double **E = create_two_dim_double(890, 360, "zeros");
	double *B = create_one_dim_double(190, "zeros");
	double **C = create_two_dim_double(310, 300, "zeros");
	double **A = create_two_dim_double(360, 420, "zeros");

	for (int d = 0; d < 418; d++)
	  for (int c = 0; c < 355; c++)
	    for (int b = 0; b < 355; b++)
	      for (int a = 0; a < 355; a++)
	      {
	        
	       A[a][b]=A[a+5][b+2]*0.09;
	      }

    return 0;
}