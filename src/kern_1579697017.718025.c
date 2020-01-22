#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(630, 630, "random");

	for (int d = 2; d < 630; d++)
	  for (int c = 2; c < 628; c++)
	    for (int b = 2; b < 628; b++)
	      for (int a = 2; a < 628; a++)
	      {
	        
	       A[a][b]=A[a-2][b-2]+0.475;
	        
	       A[a][b]=A[a+2][b]+0.405;
	      }

    return 0;
}