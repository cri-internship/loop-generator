#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(420, 840, 120, "ones");
	double *A = create_one_dim_double(670, "ones");
	double **D = create_two_dim_double(210, 990, "ones");
	double **B = create_two_dim_double(80, 560, "ones");
	double **E = create_two_dim_double(820, 180, "ones");

	for (int b = 0; b < 558; b++)
	  for (int a = 0; a < 78; a++)
	  {
	    
	     D[a][b]=D[a+5][b+5]*B[a][b]+C[a][b][a]/E[a][b]-A[a];
	    
	     B[a][b]=B[a+2][b+2]/0.362;
	    
	     C[a][b][a]=C[a][b+3][a+1]+D[a][b]-B[a][b]/E[a][b]*A[a];
	  }

    return 0;
}