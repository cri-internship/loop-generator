#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(440, 940, "ones");
	float ***B = create_three_dim_float(460, 280, 470, "ones");

	for (int c = 0; c < 465; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 2; a < 440; a++)
	    {
	      
	      A[a][b]=0.166;
	      A[a-2][b-5]=0.944;
	      
	      B[a][b][c]=0.542;
	      B[a+5][b][c+5]=A[a][b];
	    }

    return 0;
}