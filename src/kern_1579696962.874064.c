#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(720, 40, "random");
	double **A = create_two_dim_double(160, 480, "random");
	double ***C = create_three_dim_double(830, 830, 230, "random");
	double ***D = create_three_dim_double(180, 190, 980, "random");

	for (int b = 4; b < 190; b++)
	  for (int a = 5; a < 156; a++)
	  {
	    
	     A[a][b]=A[a+1][b+5]/0.675;
	    
	     A[a][b]=A[a+4][b+3]*C[a][b][a]+B[a][b]-C[a][b][a];
	    
	     double var_a=D[a][b][a]-0.672;
	     double var_b=D[a-5][b-4][a-3]/0.136;
	    
	     A[a][b]=C[a][b][a]*A[a][b]/A[a][b]-B[a][b];
	     C[a][b][a]=C[a][b+1][a+5]-B[a][b]*A[a][b]+D[a][b][a];
	  }

    return 0;
}