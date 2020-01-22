#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(420, "random");
	double *B = create_one_dim_double(900, "random");
	double ***E = create_three_dim_double(340, 980, 260, "random");
	double *A = create_one_dim_double(310, "random");
	double **C = create_two_dim_double(30, 120, "random");

	for (int b = 0; b < 979; b++)
	  for (int a = 0; a < 305; a++)
	  {
	    
	     A[a]=0.718;
	     float  var_a=A[a]+0.807;
	    
	     A[a]=A[a+3]*B[a]+C[a][b]-D[a]/E[a][b][a];
	    
	     B[a]=B[a+1]+A[a]-0.042/C[a][b]*D[a];
	    
	     C[a][b]=A[a]-E[a][b][a]+C[a][b]*B[a];
	     E[a][b][a]=A[a+5]-0.702*D[a];
	    
	     double var_b=E[a][b][a]/0.849;
	     double var_c=E[a][b+1][a+5]-0.369;
	  }

    return 0;
}