#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(90, "ones");
	double **D = create_two_dim_double(380, 410, "ones");
	double **E = create_two_dim_double(380, 380, "ones");
	double ***B = create_three_dim_double(210, 550, 110, "ones");
	double *A = create_one_dim_double(250, "ones");

	for (int b = 2; b < 410; b++)
	  for (int a = 2; a < 247; a++)
	  {
	    
	     D[a][b]=A[a]/D[a][b]-E[a][b]*0.441;
	     E[a][b]=A[a+3]/C[a]+B[a][b][a]*E[a][b]-D[a][b];
	    
	     C[a]=D[a][b]*A[a]/E[a][b]-C[a];
	     A[a]=D[a-2][b-2]*A[a]/E[a][b]-C[a];
	  }

    return 0;
}