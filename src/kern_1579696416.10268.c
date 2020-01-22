#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(990, 850, 950, "ones");
	double *B = create_one_dim_double(660, "ones");
	double ***D = create_three_dim_double(870, 650, 810, "ones");
	double ***A = create_three_dim_double(720, 540, 610, "ones");

	for (int b = 4; b < 540; b++)
	  for (int a = 5; a < 720; a++)
	  {
	    
	     D[a][b][a]=D[a-5][b][a-2]+A[a][b][a];
	    
	     A[a][b][a]=0.687;
	     A[a-1][b-4][a-3]=0.566;
	  }

    return 0;
}