#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(220, 390, 630, "zeros");
	float ***B = create_three_dim_float(130, 770, 250, "zeros");
	float *D = create_one_dim_float(680, "zeros");
	float *A = create_one_dim_float(310, "zeros");
	float ***E = create_three_dim_float(800, 910, 580, "zeros");

	for (int b = 1; b < 389; b++)
	  for (int a = 4; a < 130; a++)
	  {
	    
	     C[a][b][a]=C[a+1][b+1][a+2]+0.828;
	    
	     B[a][b][a]=E[a][b][a]+D[a]-A[a]*C[a][b][a];
	     B[a-1][b-1][a-4]=A[a]*D[a]-E[a][b][a];
	    
	     B[a][b][a]=A[a]*B[a][b][a]+E[a][b][a]/C[a][b][a];
	     D[a]=A[a-2]*B[a][b][a]-E[a][b][a]+D[a]/C[a][b][a];
	  }

    return 0;
}