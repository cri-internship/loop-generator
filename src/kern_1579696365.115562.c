#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(220, 570, "zeros");
	float ***A = create_three_dim_float(820, 810, 820, "zeros");

	for (int c = 1; c < 570; c++)
	  for (int b = 1; b < 220; b++)
	    for (int a = 1; a < 220; a++)
	    {
	      
	      A[a][b][c]=B[a][b]*A[a][b][c];
	      B[a][b]=B[a-1][b-1]*A[a][b][c];
	    }

    return 0;
}