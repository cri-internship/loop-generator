#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(920, 540, 430, "random");
	float ***B = create_three_dim_float(280, 850, 460, "random");
	float *C = create_one_dim_float(960, "random");

	for (int c = 1; c < 430; c++)
	  for (int b = 5; b < 540; b++)
	    for (int a = 2; a < 920; a++)
	    {
	      
	      A[a][b][c]=B[a][b][c]-0.172;
	      A[a-2][b-5][c-1]=C[a]/B[a][b][c];
	    }

    return 0;
}