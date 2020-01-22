#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(500, "zeros");
	float **E = create_two_dim_float(190, 800, "zeros");
	float **D = create_two_dim_float(510, 670, "zeros");
	float *A = create_one_dim_float(190, "zeros");
	float ***C = create_three_dim_float(230, 1000, 120, "zeros");

	for (int b = 5; b < 670; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     D[a][b]=D[a-3][b-4]*0.148;
	    
	     E[a][b]=E[a-5][b-5]+C[a][b][a]-B[a]/D[a][b];
	    
	     C[a][b][a]=0.892;
	     C[a-1][b-5][a-3]=0.228;
	    
	     E[a][b]=C[a][b][a]-A[a]/E[a][b]*D[a][b]+0.224;
	     D[a][b]=C[a][b-1][a-4]+D[a][b]-A[a]/B[a]*E[a][b];
	  }

    return 0;
}