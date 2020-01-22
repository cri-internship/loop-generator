#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(760, 940, "random");
	double *C = create_one_dim_double(890, "random");
	double ***A = create_three_dim_double(720, 50, 220, "random");
	double **B = create_two_dim_double(760, 980, "random");

	for (int b = 4; b < 50; b++)
	  for (int a = 4; a < 720; a++)
	  {
	    
	     C[a]=C[a-4]-0.484;
	    
	     D[a][b]=D[a+2][b+2]*0.883;
	    
	     D[a][b]=A[a][b][a]/C[a]+B[a][b];
	    
	     A[a][b][a]=D[a][b]*B[a][b];
	     A[a-3][b][a-3]=B[a][b]*D[a][b]-C[a];
	    
	     B[a][b]=C[a]-D[a][b]+A[a][b][a]*B[a][b];
	     D[a][b]=C[a-2]-B[a][b]/A[a][b][a]+0.243;
	  }

    return 0;
}