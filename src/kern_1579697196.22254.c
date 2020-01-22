#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(670, 80, "ones");
	double **D = create_two_dim_double(440, 140, "ones");
	double ***A = create_three_dim_double(820, 440, 180, "ones");
	double *B = create_one_dim_double(260, "ones");
	double *C = create_one_dim_double(290, "ones");

	for (int c = 0; c < 140; c++)
	  for (int b = 0; b < 439; b++)
	    for (int a = 0; a < 439; a++)
	    {
	      
	      D[a][b]=D[a+1][b]+0.749;
	    }

    return 0;
}