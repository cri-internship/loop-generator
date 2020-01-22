#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(610, 660, 670, "random");
	double **B = create_two_dim_double(10, 560, "random");
	double ***C = create_three_dim_double(660, 910, 530, "random");

	for (int b = 1; b < 555; b++)
	  for (int a = 5; a < 5; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-1][a-5]-0.736;
	    
	     B[a][b]=B[a+5][b+3]*0.818+C[a][b][a];
	    
	     A[a][b][a]=A[a+3][b+2][a+3]/B[a][b]*C[a][b][a];
	    
	     C[a][b][a]=A[a][b][a]-0.909;
	    
	     A[a][b][a]=0.427;
	    
	     double var_a=B[a][b]/0.34;
	     double var_b=B[a+2][b+5]/0.204;
	  }

    return 0;
}