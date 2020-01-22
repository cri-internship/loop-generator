#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(570, 910, "zeros");
	float *D = create_one_dim_float(710, "zeros");
	float **E = create_two_dim_float(230, 860, "zeros");
	float **B = create_two_dim_float(330, 150, "zeros");
	float ***A = create_three_dim_float(300, 980, 260, "zeros");

	for (int b = 4; b < 860; b++)
	  for (int a = 5; a < 230; a++)
	  {
	    
	     E[a][b]=E[a-2][b-1]*B[a][b]+C[a][b]-D[a];
	    
	     C[a][b]=C[a-1][b-2]+A[a][b][a]*E[a][b]-A[a][b][a]/E[a][b];
	    
	     A[a][b][a]=A[a-3][b-4][a]+B[a][b];
	    
	     C[a][b]=C[a-3][b-1]+B[a][b]-A[a][b][a]*E[a][b];
	    
	     A[a][b][a]=A[a-3][b][a-5]+E[a][b]/C[a][b];
	  }

    return 0;
}