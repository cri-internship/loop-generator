#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(390, 110, "random");
	double **A = create_two_dim_double(190, 660, "random");
	double **B = create_two_dim_double(110, 260, "random");
	double *C = create_one_dim_double(200, "random");

	for (int b = 2; b < 258; b++)
	  for (int a = 3; a < 110; a++)
	  {
	    
	     A[a][b]=A[a-3][b-2]+0.381;
	    
	     A[a][b]=A[a+2][b+5]+0.892;
	    
	     B[a][b]=B[a][b+2]*0.343;
	  }

    return 0;
}