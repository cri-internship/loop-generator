#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(730, 50, "random");
	float **D = create_two_dim_float(720, 750, "random");
	float ***C = create_three_dim_float(710, 610, 750, "random");
	float ***B = create_three_dim_float(730, 740, 1000, "random");

	for (int c = 5; c < 1000; c++)
	  for (int b = 5; b < 50; b++)
	    for (int a = 4; a < 715; a++)
	    {
	      
	      D[a][b]=D[a+5][b+3]+C[a][b][c]-B[a][b][c]/A[a][b];
	      
	      B[a][b][c]=0.385;
	      B[a-2][b-5][c-5]=0.132;
	      
	      D[a][b]=0.596;
	      
	      B[a][b][c]=A[a][b]-0.769;
	      C[a][b][c]=A[a-4][b-4]-0.334;
	    }

    return 0;
}