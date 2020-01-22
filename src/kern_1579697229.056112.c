#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "ones");
	double ***B = create_three_dim_double(70, 630, 270, "ones");

	for (int c = 2; c < 270; c++)
	  for (int b = 1; b < 630; b++)
	    for (int a = 5; a < 70; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-1][c-2]/0.022;
	    }

    return 0;
}