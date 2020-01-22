#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(750, 390, 570, "random");
	double ***A = create_three_dim_double(520, 650, 810, "random");
	double *B = create_one_dim_double(940, "random");

	for (int b = 0; b < 386; b++)
	  for (int a = 0; a < 517; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+5][a]+0.245;
	    
	     C[a][b][a]=0.499;
	     C[a+5][b+2][a+2]=0.795;
	    
	     C[a][b][a]=0.937;
	  }

    return 0;
}