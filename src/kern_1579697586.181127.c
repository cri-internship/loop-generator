#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(750, 360, 710, "random");
	double **B = create_two_dim_double(750, 380, "random");
	double **C = create_two_dim_double(200, 760, "random");

	for (int b = 4; b < 356; b++)
	  for (int a = 5; a < 200; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-3][a-5]-0.636;
	    
	     C[a][b]=B[a][b]+A[a][b][a];
	     B[a][b]=C[a][b]-0.502;
	    
	     C[a][b]=C[a][b+1]-0.073;
	    
	     A[a][b][a]=A[a+3][b+3][a+3]/C[a][b]-B[a][b];
	    
	     C[a][b]=A[a][b][a]-C[a][b];
	     A[a][b][a]=A[a+4][b+4][a+1]+0.147;
	    
	     double var_a=A[a][b][a]-0.117;
	     double var_b=A[a-5][b][a-4]*0.227;
	    
	     A[a][b][a]=C[a][b]*B[a][b]/A[a][b][a];
	     A[a][b][a]=C[a-3][b-4]-A[a][b][a]+B[a][b];
	  }

    return 0;
}