#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(470, 490, "ones");
	double ***A = create_three_dim_double(70, 220, 800, "ones");
	double ***C = create_three_dim_double(850, 560, 770, "ones");

	for (int c = 0; c < 800; c++)
	  for (int b = 0; b < 220; b++)
	    for (int a = 5; a < 70; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b][c]*B[a][b];
	    }

    return 0;
}