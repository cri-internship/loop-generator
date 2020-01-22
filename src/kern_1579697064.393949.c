#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(860, 760, "random");
	float ***B = create_three_dim_float(300, 60, 850, "random");
	float **A = create_two_dim_float(460, 230, "random");

	for (int b = 3; b < 56; b++)
	  for (int a = 4; a < 299; a++)
	  {
	    
	     A[a][b]=A[a-3][b]+B[a][b][a]*C[a][b];
	    
	     A[a][b]=A[a-2][b]-0.267;
	    
	     B[a][b][a]=0.119;
	     B[a][b-1][a]=0.384;
	    
	     B[a][b][a]=A[a][b]+A[a][b];
	    
	     B[a][b][a]=B[a][b][a]+A[a][b];
	     A[a][b]=B[a][b+4][a+1]+C[a][b];
	    
	     float var_a=C[a][b]+0.265;
	     float var_b=C[a+1][b+1]+0.185;
	    
	     C[a][b]=B[a][b][a]-A[a][b]*C[a][b];
	     A[a][b]=B[a-3][b-3][a]*0.686;
	  }

    return 0;
}