#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(390, 580, 430, "ones");
	double **B = create_two_dim_double(810, 110, "ones");

	for (int b = 5; b < 106; b++)
	  for (int a = 3; a < 385; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-5][a-1]+0.287;
	    
	     A[a][b][a]=A[a+5][b+1][a]-0.998;
	    
	     B[a][b]=0.186;
	     B[a+3][b+4]=A[a][b][a];
	  }

    return 0;
}