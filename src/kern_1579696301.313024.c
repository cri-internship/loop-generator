#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(90, 610, 520, "random");
	double **D = create_two_dim_double(40, 100, "random");
	double *C = create_one_dim_double(370, "random");
	double **B = create_two_dim_double(180, 200, "random");

	for (int b = 0; b < 195; b++)
	  for (int a = 0; a < 179; a++)
	  {
	    
	     D[a][b]=B[a][b]/D[a][b];
	     A[a][b][a]=B[a+1][b+5]*C[a];
	    
	     double var_a=C[a]+0.34;
	  }

    return 0;
}