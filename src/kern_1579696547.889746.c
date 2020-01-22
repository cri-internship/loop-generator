#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(20, 90, 380, "random");
	float **C = create_two_dim_float(80, 370, "random");
	float ***A = create_three_dim_float(420, 370, 270, "random");

	for (int b = 5; b < 85; b++)
	  for (int a = 3; a < 16; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+5][a+4]*A[a][b][a];
	    
	     A[a][b][a]=0.454;
	     A[a][b-5][a-1]=0.23;
	    
	     C[a][b]=B[a][b][a]/A[a][b][a];
	     C[a+4][b+1]=0.982-A[a][b][a];
	    
	     float var_a=C[a][b]-0.416;
	     float var_b=C[a-2][b-1]-0.499;
	    
	     B[a][b][a]=B[a][b][a]*C[a][b]-A[a][b][a];
	     A[a][b][a]=B[a+1][b+1][a+1]-C[a][b];
	    
	     float var_c=C[a][b]/0.48;
	     float var_d=C[a-3][b-2]-0.593;
	  }

    return 0;
}