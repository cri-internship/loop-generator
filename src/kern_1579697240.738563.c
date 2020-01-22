#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(280, "random");
	double **C = create_two_dim_double(470, 230, "random");
	double ***D = create_three_dim_double(190, 940, 510, "random");
	double **B = create_two_dim_double(470, 70, "random");

	for (int b = 5; b < 230; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     A[a]=A[a-2]+0.558;
	    
	     A[a]=D[a][b][a]+C[a][b]*B[a][b];
	    
	     double var_a=C[a][b]-0.767;
	     double var_b=C[a-3][b-5]*0.211;
	    
	     C[a][b]=C[a][b]/A[a]-A[a]*D[a][b][a];
	     B[a][b]=C[a-5][b]+0.164*A[a];
	    
	     D[a][b][a]=D[a][b][a]+B[a][b]*A[a]/C[a][b];
	     A[a]=D[a][b-2][a-4]/B[a][b]-C[a][b]+0.813;
	    
	     B[a][b]=A[a]*D[a][b][a]-B[a][b];
	     D[a][b][a]=A[a+2]+0.471-B[a][b]/C[a][b];
	    
	     A[a]=A[a]*B[a][b]/C[a][b];
	     C[a][b]=A[a-3]/B[a][b]*D[a][b][a]-C[a][b];
	  }

    return 0;
}