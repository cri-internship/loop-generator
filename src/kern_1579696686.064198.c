#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(870, 840, "random");
	double **E = create_two_dim_double(880, 310, "random");
	double *C = create_one_dim_double(900, "random");
	double ***A = create_three_dim_double(590, 400, 60, "random");
	double ***B = create_three_dim_double(630, 140, 960, "random");

	for (int b = 0; b < 140; b++)
	  for (int a = 4; a < 630; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b][a-4]-A[a][b][a]/0.29*E[a][b];
	    
	     E[a][b]=E[a+1][b]*B[a][b][a]+D[a][b]-0.645/D[a][b];
	  }

    return 0;
}