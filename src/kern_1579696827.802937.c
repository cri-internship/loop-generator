#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(750, "random");
	double *B = create_one_dim_double(40, "random");
	double ***D = create_three_dim_double(10, 890, 730, "random");
	double ***E = create_three_dim_double(560, 660, 80, "random");
	double **A = create_two_dim_double(550, 780, "random");

	for (int c = 0; c < 76; c++)
	  for (int b = 0; b < 657; b++)
	    for (int a = 0; a < 559; a++)
	    {
	      
	      E[a][b][c]=E[a+1][b+3][c+4]*0.956;
	    }

    return 0;
}