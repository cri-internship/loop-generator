#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(430, "random");
	double ***D = create_three_dim_double(950, 680, 830, "random");
	double **A = create_two_dim_double(640, 610, "random");
	double ***B = create_three_dim_double(360, 330, 740, "random");

	for (int b = 1; b < 330; b++)
	  for (int a = 5; a < 360; a++)
	  {
	    
	     A[a][b]=A[a+1][b+5]*0.093;
	    
	     A[a][b]=B[a][b][a]/A[a][b]-D[a][b][a];
	     C[a]=B[a-5][b-1][a-5]-C[a]/A[a][b];
	  }

    return 0;
}