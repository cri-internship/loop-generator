#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(850, 190, 80, "zeros");
	float **B = create_two_dim_float(110, 170, "zeros");

	for (int c = 0; c < 75; c++)
	  for (int b = 0; b < 186; b++)
	    for (int a = 0; a < 848; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+4][c+5]+0.904;
	    }

    return 0;
}