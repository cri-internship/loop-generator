#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(190, "zeros");
	double *E = create_one_dim_double(600, "zeros");
	double ***B = create_three_dim_double(950, 850, 110, "zeros");
	double **A = create_two_dim_double(580, 110, "zeros");
	double **D = create_two_dim_double(930, 490, "zeros");

	for (int b = 4; b < 849; b++)
	  for (int a = 3; a < 946; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-4][a-3]*0.48;
	    
	     B[a][b][a]=B[a+1][b+1][a+2]/E[a]*A[a][b]-D[a][b]+0.31;
	  }

    return 0;
}