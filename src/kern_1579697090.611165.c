#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(250, 680, 560, "zeros");
	double *B = create_one_dim_double(820, "zeros");

	for (int c = 0; c < 560; c++)
	  for (int b = 3; b < 680; b++)
	    for (int a = 1; a < 250; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-3][c]/B[a];
	      
	      B[a]=A[a][b][c];
	      B[a+1]=0.897;
	    }

    return 0;
}