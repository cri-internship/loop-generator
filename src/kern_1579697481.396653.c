#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(290, 850, 390, "ones");
	float **A = create_two_dim_float(820, 770, "ones");

	for (int c = 0; c < 385; c++)
	  for (int b = 0; b < 770; b++)
	    for (int a = 0; a < 287; a++)
	    {
	      
	      A[a][b]=A[a+1][b]/0.92;
	      
	      B[a][b][c]=B[a+3][b+2][c+5]/A[a][b];
	    }

    return 0;
}