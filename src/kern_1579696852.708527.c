#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(870, 950, 190, "ones");
	float **A = create_two_dim_float(410, 660, "ones");
	float ***D = create_three_dim_float(30, 350, 40, "ones");
	float *C = create_one_dim_float(540, "ones");

	for (int b = 0; b < 349; b++)
	  for (int a = 5; a < 25; a++)
	  {
	    
	     C[a]=C[a-5]+A[a][b]-0.95/D[a][b][a];
	    
	     A[a][b]=A[a+3][b+3]*C[a];
	    
	     C[a]=C[a+5]+A[a][b]-D[a][b][a]/B[a][b][a];
	    
	     C[a]=D[a][b][a]*0.335;
	     D[a][b][a]=D[a][b+1][a+5]/C[a];
	  }

    return 0;
}