#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(270, 180, 640, "random");
	double ***B = create_three_dim_double(820, 720, 780, "random");
	double ***A = create_three_dim_double(610, 560, 430, "random");

	for (int c = 1; c < 430; c++)
	  for (int b = 4; b < 560; b++)
	    for (int a = 3; a < 610; a++)
	    {
	      
	      double var_a=A[a][b][c]+0.397;
	      double var_b=A[a-3][b-4][c-1]/0.523;
	    }

    return 0;
}