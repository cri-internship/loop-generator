#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(20, 860, "random");
	double *A = create_one_dim_double(600, "random");
	double ***E = create_three_dim_double(710, 530, 60, "random");
	double ***C = create_three_dim_double(160, 340, 160, "random");
	double **D = create_two_dim_double(220, 150, "random");

	for (int b = 4; b < 150; b++)
	  for (int a = 2; a < 18; a++)
	  {
	    
	     B[a][b]=B[a+2][b+3]+0.244;
	    
	     B[a][b]=0.249;
	    
	     A[a]=0.555;
	     A[a+3]=0.397;
	    
	     double var_a=D[a][b]-0.886;
	     double var_b=D[a+5][b]+0.977;
	    
	     B[a][b]=A[a]/C[a][b][a]-E[a][b][a]*D[a][b];
	     E[a][b][a]=A[a-2]/B[a][b]+E[a][b][a]-B[a][b]*C[a][b][a];
	  }

    return 0;
}