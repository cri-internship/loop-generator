#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(80, "zeros");
	float ***C = create_three_dim_float(620, 660, 760, "zeros");
	float **D = create_two_dim_float(800, 890, "zeros");
	float **E = create_two_dim_float(670, 800, "zeros");
	float **B = create_two_dim_float(310, 560, "zeros");

	for (int b = 0; b < 798; b++)
	  for (int a = 5; a < 80; a++)
	  {
	    
	     A[a]=A[a-5]-E[a][b];
	    
	     D[a][b]=E[a][b]+C[a][b][a]*0.227/D[a][b];
	     C[a][b][a]=E[a][b+2]-A[a];
	  }

    return 0;
}