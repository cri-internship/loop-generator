#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(930, 440, "random");
	double *D = create_one_dim_double(660, "random");
	double **B = create_two_dim_double(570, 170, "random");
	double ***A = create_three_dim_double(890, 680, 290, "random");

	for (int b = 4; b < 169; b++)
	  for (int a = 3; a < 569; a++)
	  {
	    
	     D[a]=D[a-3]/0.654;
	    
	     D[a]=D[a+3]-0.51;
	    
	     B[a][b]=C[a][b];
	     B[a][b+1]=A[a][b][a];
	    
	     C[a][b]=B[a][b]-D[a];
	     A[a][b][a]=B[a-1][b-4]/D[a]+C[a][b]-A[a][b][a];
	    
	     double var_a=B[a][b]*0.152;
	     double var_b=B[a+1][b+1]+0.092;
	  }

    return 0;
}