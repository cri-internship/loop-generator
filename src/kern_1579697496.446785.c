#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(460, 310, "random");
	float **E = create_two_dim_float(120, 790, "random");
	float ***A = create_three_dim_float(50, 90, 680, "random");
	float ***C = create_three_dim_float(530, 690, 510, "random");
	float **B = create_two_dim_float(40, 330, "random");

	for (int b = 0; b < 87; b++)
	  for (int a = 5; a < 45; a++)
	  {
	    
	     D[a][b]=D[a+4][b+3]*C[a][b][a];
	    
	     A[a][b][a]=A[a+5][b+3][a+5]/B[a][b]+E[a][b]-D[a][b]*C[a][b][a];
	    
	     D[a][b]=0.062;
	  }

    return 0;
}