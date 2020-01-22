#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(640, 230, "ones");
	float **D = create_two_dim_float(1000, 20, "ones");
	float ***C = create_three_dim_float(860, 510, 420, "ones");
	float ***A = create_three_dim_float(920, 950, 210, "ones");
	float ***E = create_three_dim_float(650, 750, 870, "ones");

	for (int b = 5; b < 230; b++)
	  for (int a = 5; a < 640; a++)
	  {
	    
	     B[a][b]=B[a-4][b-5]-0.065;
	    
	     E[a][b][a]=E[a-5][b-5][a-4]-0.836;
	    
	     E[a][b][a]=E[a+3][b+5][a+5]+0.109;
	    
	     A[a][b][a]=C[a][b][a]*B[a][b];
	     A[a-5][b-5][a-1]=D[a][b]/E[a][b][a]+0.743*E[a][b][a];
	    
	     C[a][b][a]=0.334;
	     C[a+3][b+4][a+2]=0.556;
	    
	     float var_a=C[a][b][a]*0.876;
	     float var_b=C[a-1][b][a-4]*0.278;
	    
	     float var_c=B[a][b]*0.127;
	     float var_d=B[a-3][b-4]/0.448;
	  }

    return 0;
}