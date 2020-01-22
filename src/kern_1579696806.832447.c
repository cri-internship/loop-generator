#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(870, 590, 980, "ones");
	double ***A = create_three_dim_double(350, 980, 810, "ones");

	for (int b = 1; b < 590; b++)
	  for (int a = 2; a < 345; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-1][a-2]*0.051;
	    
	     A[a][b][a]=0.7;
	     A[a+5][b][a+1]=B[a][b][a];
	  }

    return 0;
}