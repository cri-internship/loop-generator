#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(710, 320, "ones");
	double **A = create_two_dim_double(40, 550, "ones");
	double **B = create_two_dim_double(660, 430, "ones");

	for (int d = 1; d < 320; d++)
	  for (int c = 3; c < 710; c++)
	    for (int b = 3; b < 710; b++)
	      for (int a = 3; a < 710; a++)
	      {
	        
	       C[a][b]=C[a][b]+B[a][b]*A[a][b];
	       B[a][b]=C[a-3][b-1]+B[a][b]-A[a][b];
	      }

    return 0;
}