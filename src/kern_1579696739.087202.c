#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(170, 580, "random");
	double *B = create_one_dim_double(500, "random");
	double ***A = create_three_dim_double(250, 80, 740, "random");

	for (int c = 5; c < 580; c++)
	  for (int b = 2; b < 170; b++)
	    for (int a = 2; a < 170; a++)
	    {
	      
	      C[a][b]=0.787;
	      C[a-2][b-5]=0.455;
	    }

    return 0;
}