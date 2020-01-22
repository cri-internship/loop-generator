#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(850, "random");
	double **B = create_two_dim_double(750, 820, "random");
	double **A = create_two_dim_double(10, 160, "random");
	double **C = create_two_dim_double(540, 150, "random");
	double ***E = create_three_dim_double(160, 150, 450, "random");

	for (int b = 0; b < 150; b++)
	  for (int a = 1; a < 6; a++)
	  {
	    
	     E[a][b][a]=E[a][b][a-1]-0.28;
	    
	     double var_a=D[a]-0.561;
	     double var_b=D[a+1]-0.157;
	    
	     A[a][b]=D[a]-C[a][b];
	     C[a][b]=D[a+3]/B[a][b]-A[a][b]+E[a][b][a]*A[a][b];
	    
	     double var_c=A[a][b]/0.347;
	     double var_d=A[a+4][b+3]-0.44;
	    
	     double var_e=D[a]/0.223;
	     double var_f=D[a-1]/0.794;
	  }

    return 0;
}