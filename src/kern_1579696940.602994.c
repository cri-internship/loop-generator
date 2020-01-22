#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(130, 770, "ones");
	double **C = create_two_dim_double(620, 660, "ones");
	double ***D = create_three_dim_double(710, 460, 30, "ones");
	double *A = create_one_dim_double(900, "ones");

	for (int c = 0; c < 655; c++)
	  for (int b = 0; b < 618; b++)
	    for (int a = 0; a < 618; a++)
	    {
	      
	      B[a][b]=C[a][b]*A[a];
	      A[a]=C[a+2][b+5]+0.033-D[a][b][c];
	    }

    return 0;
}