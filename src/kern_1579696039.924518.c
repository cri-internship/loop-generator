#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(140, 670, "ones");
	float ***B = create_three_dim_float(530, 420, 370, "ones");
	float ***A = create_three_dim_float(230, 550, 480, "ones");

	for (int b = 5; b < 418; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     A[a][b][a]=B[a][b][a];
	     A[a][b-4][a-1]=C[a][b];
	    
	     A[a][b][a]=0.535;
	    
	     float var_a=C[a][b]*0.408;
	     float var_b=C[a-5][b-5]*0.837;
	    
	     B[a][b][a]=B[a][b][a]-A[a][b][a]*0.693;
	     A[a][b][a]=B[a+3][b+2][a+5]/C[a][b]*A[a][b][a];
	    
	     C[a][b]=C[a][b]/A[a][b][a]+B[a][b][a];
	     B[a][b][a]=C[a-3][b-5]-B[a][b][a]+A[a][b][a];
	    
	     float var_c=C[a][b]+0.062;
	     float var_d=C[a-2][b-2]+0.913;
	  }

    return 0;
}