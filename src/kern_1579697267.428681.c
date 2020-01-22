#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(330, 390, 650, "random");
	double **B = create_two_dim_double(390, 770, "random");

	for (int b = 4; b < 388; b++)
	  for (int a = 5; a < 326; a++)
	  {
	    
	     B[a][b]=B[a-5][b-1]*A[a][b][a];
	    
	     B[a][b]=B[a-2][b-4]-A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]*0.68;
	     B[a][b]=A[a+4][b+2][a]-B[a][b];
	    
	     A[a][b][a]=B[a][b]/A[a][b][a];
	     B[a][b]=B[a][b-1]/0.028;
	    
	     double var_a=A[a][b][a]*0.054;
	     double var_b=A[a+2][b][a+3]-0.185;
	  }

    return 0;
}