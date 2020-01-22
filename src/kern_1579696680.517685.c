#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(250, 260, "zeros");
	double *A = create_one_dim_double(880, "zeros");
	double **C = create_two_dim_double(170, 940, "zeros");
	double **B = create_two_dim_double(580, 770, "zeros");
	double *E = create_one_dim_double(960, "zeros");

	for (int c = 3; c < 260; c++)
	  for (int b = 4; b < 170; b++)
	    for (int a = 4; a < 170; a++)
	    {
	      
	      C[a][b]=C[a-3][b-2]/0.3;
	      
	      D[a][b]=D[a-2][b-3]*0.057;
	      
	      D[a][b]=D[a-4][b]/0.955;
	      
	      B[a][b]=B[a-3][b-1]-0.913;
	      
	      C[a][b]=D[a][b]-B[a][b];
	      
	      A[a]=E[a]+C[a][b]*B[a][b]/D[a][b];
	      A[a+5]=0.823;
	    }

    return 0;
}