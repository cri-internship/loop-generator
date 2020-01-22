#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(870, "ones");
	float **A = create_two_dim_float(850, 330, "ones");
	float **E = create_two_dim_float(760, 180, "ones");
	float **B = create_two_dim_float(10, 690, "ones");
	float **D = create_two_dim_float(40, 750, "ones");

	for (int b = 3; b < 180; b++)
	  for (int a = 5; a < 39; a++)
	  {
	    
	     D[a][b]=D[a-5][b-1]*0.107;
	    
	     C[a]=C[a+3]+0.591;
	    
	     D[a][b]=D[a+1][b]-0.957;
	    
	     C[a]=C[a+5]+A[a][b]/B[a][b];
	    
	     A[a][b]=E[a][b]/D[a][b]*0.677+B[a][b];
	     D[a][b]=E[a+3][b]*D[a][b];
	    
	     C[a]=A[a][b]*E[a][b]+E[a][b]-C[a];
	     B[a][b]=A[a-3][b-3]/E[a][b]+B[a][b]-C[a];
	  }

    return 0;
}