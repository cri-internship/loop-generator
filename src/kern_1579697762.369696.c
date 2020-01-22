#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(660, "random");
	double **A = create_two_dim_double(190, 690, "random");
	double ***B = create_three_dim_double(680, 940, 400, "random");
	double *D = create_one_dim_double(380, "random");
	double *C = create_one_dim_double(400, "random");

	for (int b = 4; b < 690; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     A[a][b]=A[a-5][b-4]/0.445;
	    
	     D[a]=D[a+5]-0.131;
	    
	     E[a]=0.333;
	     E[a-2]=0.421;
	    
	     A[a][b]=D[a]/B[a][b][a];
	    
	     B[a][b][a]=A[a][b];
	     B[a][b][a-4]=C[a]/E[a]*A[a][b];
	    
	     E[a]=D[a]/C[a]+B[a][b][a]-A[a][b];
	    
	     double var_a=B[a][b][a]*0.478;
	     double var_b=B[a-2][b-3][a-3]*0.151;
	  }

    return 0;
}