#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(920, 820, 370, "random");
	double ***D = create_three_dim_double(960, 930, 690, "random");
	double *B = create_one_dim_double(470, "random");
	double *A = create_one_dim_double(430, "random");
	double ***E = create_three_dim_double(410, 100, 210, "random");

	for (int b = 0; b < 818; b++)
	  for (int a = 5; a < 430; a++)
	  {
	    
	     B[a]=B[a+1]/C[a][b][a]*A[a]-E[a][b][a];
	    
	     D[a][b][a]=D[a+2][b][a+1]*B[a]+A[a];
	    
	     A[a]=D[a][b][a]/D[a][b][a];
	     A[a-3]=C[a][b][a]/0.65;
	    
	     C[a][b][a]=C[a][b][a]/B[a]+E[a][b][a]*A[a]-D[a][b][a];
	     A[a]=C[a+3][b+2][a+2]+0.183/A[a]-D[a][b][a];
	    
	     double var_a=C[a][b][a]*0.061;
	     double var_b=C[a][b][a-5]-0.475;
	  }

    return 0;
}