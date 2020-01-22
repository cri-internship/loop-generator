#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(550, 860, "random");
	double ***B = create_three_dim_double(140, 910, 350, "random");

	for (int c = 1; c < 350; c++)
	  for (int b = 5; b < 859; b++)
	    for (int a = 5; a < 140; a++)
	    {
	      
	      A[a][b]=A[a+2][b+1]-0.694;
	      
	      A[a][b]=B[a][b][c]+A[a][b];
	      B[a][b][c]=B[a-5][b-5][c-1]+A[a][b];
	    }

    return 0;
}