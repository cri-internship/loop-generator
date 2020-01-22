#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(300, "zeros");
	double ***A = create_three_dim_double(190, 230, 110, "zeros");

	for (int c = 3; c < 110; c++)
	  for (int b = 3; b < 230; b++)
	    for (int a = 4; a < 190; a++)
	    {
	      
	      B[a]=B[a-4]-A[a][b][c];
	      
	      A[a][b][c]=B[a];
	      A[a][b-3][c-3]=0.844;
	    }

    return 0;
}