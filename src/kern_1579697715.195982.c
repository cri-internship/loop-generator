#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(630, 670, 410, "zeros");
	double ***D = create_three_dim_double(100, 340, 850, "zeros");
	double *C = create_one_dim_double(290, "zeros");
	double ***A = create_three_dim_double(720, 850, 130, "zeros");
	double **B = create_two_dim_double(420, 650, "zeros");

	for (int b = 4; b < 647; b++)
	  for (int a = 1; a < 419; a++)
	  {
	    
	     B[a][b]=B[a-1][b-4]*A[a][b][a]-0.857+C[a]/D[a][b][a];
	    
	     B[a][b]=D[a][b][a];
	  }

    return 0;
}