#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(600, 330, "ones");
	double *B = create_one_dim_double(860, "ones");
	double **A = create_two_dim_double(140, 690, "ones");
	double **E = create_two_dim_double(890, 150, "ones");
	double **D = create_two_dim_double(620, 620, "ones");

	for (int c = 5; c < 330; c++)
	  for (int b = 5; b < 600; b++)
	    for (int a = 5; a < 600; a++)
	    {
	      
	      C[a][b]=C[a-2][b-5]-0.42;
	      
	      B[a]=0.972;
	      B[a+4]=0.165;
	      
	      B[a]=E[a][b];
	      
	      D[a][b]=B[a]/A[a][b]+B[a]-C[a][b];
	      D[a-5][b]=E[a][b]+0.389-C[a][b];
	    }

    return 0;
}