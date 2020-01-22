#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(390, 100, "ones");
	double **A = create_two_dim_double(330, 440, "ones");
	double **B = create_two_dim_double(290, 580, "ones");

	for (int d = 0; d < 579; d++)
	  for (int c = 0; c < 286; c++)
	    for (int b = 0; b < 286; b++)
	      for (int a = 0; a < 286; a++)
	      {
	        
	       B[a][b]=0.742;
	       B[a+4][b+1]=0.126;
	      }

    return 0;
}