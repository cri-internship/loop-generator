#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(610, 150, "random");
	double **B = create_two_dim_double(860, 510, "random");

	for (int c = 0; c < 145; c++)
	  for (int b = 0; b < 606; b++)
	    for (int a = 0; a < 606; a++)
	    {
	      
	      B[a][b]=B[a][b+1]/A[a][b];
	      
	      B[a][b]=B[a+5][b]*A[a][b];
	      
	      A[a][b]=B[a][b];
	      A[a+2][b]=B[a][b];
	      
	      B[a][b]=A[a][b]/B[a][b];
	      A[a][b]=A[a+4][b+5]/B[a][b];
	    }

    return 0;
}