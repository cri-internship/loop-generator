#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(530, 240, 610, "ones");
	double **B = create_two_dim_double(390, 850, "ones");

	for (int b = 4; b < 236; b++)
	  for (int a = 3; a < 387; a++)
	  {
	    
	     B[a][b]=B[a][b-4]+A[a][b][a];
	    
	     B[a][b]=B[a][b+1]*A[a][b][a];
	    
	     B[a][b]=B[a+3][b+5]+0.877;
	    
	     A[a][b][a]=B[a][b];
	     A[a+5][b+4][a]=0.854;
	    
	     B[a][b]=B[a][b]-A[a][b][a];
	     A[a][b][a]=B[a+1][b+5]/0.495;
	    
	     double var_a=A[a][b][a]+0.134;
	     double var_b=A[a-3][b][a-3]/0.405;
	  }

    return 0;
}