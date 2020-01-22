#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 430, "random");
	double ***A = create_three_dim_double(610, 250, 520, "random");

	for (int c = 5; c < 430; c++)
	  for (int b = 2; b < 240; b++)
	    for (int a = 2; a < 240; a++)
	    {
	      
	      B[a][b]=B[a-2][b-5]/0.849;
	    }

    return 0;
}