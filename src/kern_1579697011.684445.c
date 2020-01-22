#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(240, 190, 90, "ones");
	double **A = create_two_dim_double(570, 950, "ones");
	double *D = create_one_dim_double(410, "ones");
	double **C = create_two_dim_double(520, 800, "ones");

	for (int b = 0; b < 190; b++)
	  for (int a = 5; a < 240; a++)
	  {
	    
	     A[a][b]=A[a-3][b]+D[a]-C[a][b]*B[a][b][a];
	    
	     B[a][b][a]=B[a-2][b][a-5]-0.545;
	    
	     C[a][b]=A[a][b];
	     C[a+4][b]=B[a][b][a];
	    
	     B[a][b][a]=D[a]-C[a][b];
	     A[a][b]=D[a-2]+B[a][b][a]/C[a][b];
	  }

    return 0;
}