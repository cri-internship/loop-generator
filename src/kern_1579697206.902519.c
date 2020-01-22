#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(940, 820, "random");
	double **A = create_two_dim_double(720, 130, "random");

	for (int d = 0; d < 126; d++)
	  for (int c = 0; c < 717; c++)
	    for (int b = 0; b < 717; b++)
	      for (int a = 0; a < 717; a++)
	      {
	        
	       A[a][b]=A[a+3][b+4]+B[a][b];
	      }

    return 0;
}