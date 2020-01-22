#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(420, 760, "zeros");
	double **E = create_two_dim_double(90, 410, "zeros");
	double *C = create_one_dim_double(480, "zeros");
	double *D = create_one_dim_double(30, "zeros");
	double **A = create_two_dim_double(440, 730, "zeros");

	for (int b = 0; b < 410; b++)
	  for (int a = 5; a < 26; a++)
	  {
	    
	     E[a][b]=E[a-3][b]*A[a][b]+D[a]/B[a][b]-C[a];
	    
	     D[a]=D[a-5]+0.146*A[a][b];
	    
	     D[a]=D[a+4]-0.025;
	  }

    return 0;
}