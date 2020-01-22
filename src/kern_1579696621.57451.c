#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(570, 700, "random");
	double ***B = create_three_dim_double(630, 860, 350, "random");
	double **A = create_two_dim_double(510, 620, "random");
	double **D = create_two_dim_double(440, 510, "random");

	for (int b = 3; b < 510; b++)
	  for (int a = 5; a < 440; a++)
	  {
	    
	     D[a][b]=D[a-5][b-2]-C[a][b]+B[a][b][a];
	    
	     A[a][b]=A[a-4][b]*0.494;
	    
	     C[a][b]=C[a-5][b-3]/D[a][b];
	    
	     A[a][b]=A[a+3][b+3]/0.678;
	    
	     C[a][b]=A[a][b]/A[a][b]*D[a][b];
	    
	     double var_a=B[a][b][a]-0.962;
	     double var_b=B[a-5][b][a-1]/0.79;
	  }

    return 0;
}