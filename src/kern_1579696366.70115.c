#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(760, "random");
	double **B = create_two_dim_double(540, 60, "random");
	double ***E = create_three_dim_double(120, 540, 250, "random");
	double **C = create_two_dim_double(820, 60, "random");
	double *A = create_one_dim_double(900, "random");

	for (int b = 0; b < 539; b++)
	  for (int a = 3; a < 115; a++)
	  {
	    
	     A[a]=A[a+5]*0.559;
	    
	     D[a]=0.473;
	     D[a-3]=0.992;
	    
	     E[a][b][a]=E[a][b][a]+A[a]/C[a][b];
	     C[a][b]=E[a+5][b+1][a+1]*B[a][b]/D[a]+C[a][b]-0.974;
	  }

    return 0;
}