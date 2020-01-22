#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(550, 350, 610, "zeros");
	double *D = create_one_dim_double(630, "zeros");
	double **B = create_two_dim_double(960, 430, "zeros");
	double **C = create_two_dim_double(310, 440, "zeros");

	for (int d = 0; d < 429; d++)
	  for (int c = 0; c < 956; c++)
	    for (int b = 0; b < 956; b++)
	      for (int a = 0; a < 956; a++)
	      {
	        
	       B[a][b]=0.756;
	       B[a+4][b+1]=D[a]*A[a][b][c];
	      }

    return 0;
}