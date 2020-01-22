#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(770, 350, "random");
	double *D = create_one_dim_double(780, "random");
	double *C = create_one_dim_double(740, "random");
	double **E = create_two_dim_double(60, 510, "random");
	double **B = create_two_dim_double(830, 360, "random");

	for (int b = 0; b < 346; b++)
	  for (int a = 1; a < 58; a++)
	  {
	    
	     C[a]=C[a+3]/0.163;
	    
	     D[a]=A[a][b]/B[a][b];
	     A[a][b]=E[a][b]/D[a]-C[a];
	    
	     E[a][b]=A[a][b]-A[a][b];
	     E[a+2][b+5]=A[a][b]+C[a];
	    
	     A[a][b]=0.01;
	    
	     B[a][b]=A[a][b]*E[a][b]-D[a];
	     E[a][b]=A[a+4][b+4]/0.269*E[a][b];
	    
	     double var_a=B[a][b]*0.272;
	     double var_b=B[a][b+5]-0.507;
	    
	     C[a]=D[a]*E[a][b]-B[a][b]+C[a]/A[a][b];
	     A[a][b]=D[a-1]*B[a][b];
	  }

    return 0;
}