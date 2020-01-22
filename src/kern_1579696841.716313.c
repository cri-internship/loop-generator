#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(800, 950, 50, "ones");
	double ***A = create_three_dim_double(810, 150, 900, "ones");

	for (int b = 0; b < 149; b++)
	  for (int a = 0; a < 796; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+1][a+3]/0.541;
	    
	     B[a][b][a]=B[a][b][a]+0.817;
	     A[a][b][a]=B[a+1][b+5][a+4]/A[a][b][a];
	  }

    return 0;
}