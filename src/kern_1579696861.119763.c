#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(1000, 940, 370, "zeros");
	double **B = create_two_dim_double(620, 520, "zeros");
	double *A = create_one_dim_double(390, "zeros");
	double ***D = create_three_dim_double(780, 520, 840, "zeros");

	for (int b = 5; b < 520; b++)
	  for (int a = 4; a < 620; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b][a]/A[a]*D[a][b][a];
	    
	     B[a][b]=0.312;
	     B[a-4][b-5]=0.909;
	    
	     A[a]=C[a][b][a]*B[a][b]/D[a][b][a]+B[a][b];
	     C[a][b][a]=C[a+2][b+5][a]+A[a]*B[a][b]-D[a][b][a];
	  }

    return 0;
}