#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(160, 80, 550, "zeros");
	double *D = create_one_dim_double(410, "zeros");
	double **B = create_two_dim_double(880, 310, "zeros");
	double ***A = create_three_dim_double(220, 630, 430, "zeros");

	for (int b = 4; b < 78; b++)
	  for (int a = 5; a < 157; a++)
	  {
	    
	     B[a][b]=B[a-2][b-1]+A[a][b][a]*0.061/D[a];
	    
	     B[a][b]=B[a+3][b+2]/0.645;
	    
	     A[a][b][a]=C[a][b][a]-B[a][b]/D[a]+A[a][b][a];
	     C[a][b][a]=0.081;
	    
	     A[a][b][a]=D[a]/B[a][b]*C[a][b][a];
	    
	     C[a][b][a]=D[a]*B[a][b]+A[a][b][a];
	  }

    return 0;
}