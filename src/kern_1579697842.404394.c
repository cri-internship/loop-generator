#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(610, 500, 210, "zeros");
	double *A = create_one_dim_double(630, "zeros");

	for (int c = 0; c < 208; c++)
	  for (int b = 3; b < 495; b++)
	    for (int a = 4; a < 608; a++)
	    {
	      
	      A[a]=0.813;
	      B[a][b][c]=A[a]*B[a][b][c];
	      
	      B[a][b][c]=B[a-4][b-3][c]/0.075;
	      
	      A[a]=0.439;
	    }

    return 0;
}