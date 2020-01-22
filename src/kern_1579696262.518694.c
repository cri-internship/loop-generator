#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(720, 890, 190, "random");
	float *B = create_one_dim_float(780, "random");
	float *D = create_one_dim_float(660, "random");
	float ***C = create_three_dim_float(610, 630, 300, "random");

	for (int c = 3; c < 300; c++)
	  for (int b = 2; b < 630; b++)
	    for (int a = 5; a < 610; a++)
	    {
	      
	      B[a]=0.118;
	      B[a]=0.856;
	      
	      C[a][b][c]=D[a];
	      C[a-5][b-2][c-3]=B[a]/A[a][b][c];
	    }

    return 0;
}