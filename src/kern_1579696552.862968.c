#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(940, 180, "zeros");
	double ***B = create_three_dim_double(400, 740, 280, "zeros");

	for (int c = 4; c < 280; c++)
	  for (int b = 5; b < 179; b++)
	    for (int a = 4; a < 400; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-5][c-4]/0.324;
	      
	      A[a][b]=A[a+3][b+1]-B[a][b][c];
	    }

    return 0;
}