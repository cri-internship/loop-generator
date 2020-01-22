#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(960, 530, "ones");
	float ***B = create_three_dim_float(460, 420, 10, "ones");

	for (int c = 4; c < 525; c++)
	  for (int b = 5; b < 955; b++)
	    for (int a = 5; a < 955; a++)
	    {
	      
	      A[a][b]=A[a-5][b-2]+B[a][b][c];
	      
	      A[a][b]=A[a][b-4]/0.708;
	      
	      float var_a=A[a][b]+0.846;
	      float var_b=A[a][b+5]/0.403;
	    }

    return 0;
}