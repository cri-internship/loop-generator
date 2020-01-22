#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(490, "zeros");
	double **A = create_two_dim_double(590, 730, "zeros");

	for (int d = 0; d < 730; d++)
	  for (int c = 0; c < 489; c++)
	    for (int b = 0; b < 489; b++)
	      for (int a = 0; a < 489; a++)
	      {
	        
	       B[a]=A[a][b];
	       B[a+1]=A[a][b];
	        
	       B[a]=A[a][b]+B[a];
	       A[a][b]=A[a+1][b]+B[a];
	      }

    return 0;
}