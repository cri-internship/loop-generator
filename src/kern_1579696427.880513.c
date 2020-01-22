#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(130, 180, 490, "random");
	float *B = create_one_dim_float(980, "random");
	float ***A = create_three_dim_float(650, 70, 130, "random");
	float **C = create_two_dim_float(470, 440, "random");

	for (int b = 2; b < 67; b++)
	  for (int a = 5; a < 130; a++)
	  {
	    
	     C[a][b]=C[a-3][b-2]*A[a][b][a]+B[a]/D[a][b][a];
	    
	     A[a][b][a]=A[a+3][b+3][a+4]+0.261;
	    
	     B[a]=0.494;
	     B[a+2]=0.812;
	    
	     A[a][b][a]=C[a][b]/C[a][b]-B[a];
	    
	     A[a][b][a]=C[a][b]-A[a][b][a];
	     D[a][b][a]=C[a+3][b+2]/B[a];
	    
	     float var_a=D[a][b][a]+0.131;
	     float var_b=D[a][b-2][a-5]-0.833;
	  }

    return 0;
}