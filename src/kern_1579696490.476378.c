#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(670, 640, "zeros");
	double **B = create_two_dim_double(660, 260, "zeros");

	for (int c = 0; c < 259; c++)
	  for (int b = 0; b < 657; b++)
	    for (int a = 0; a < 657; a++)
	    {
	      
	      B[a][b]=B[a+2][b+1]+0.551;
	      
	      A[a][b]=0.949;
	      A[a][b]=0.222;
	      
	      B[a][b]=B[a][b]*A[a][b];
	      A[a][b]=B[a+3][b+1]/0.187;
	    }

    return 0;
}