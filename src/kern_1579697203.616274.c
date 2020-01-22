#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(480, 220, 140, "zeros");
	double *B = create_one_dim_double(410, "zeros");
	double ***C = create_three_dim_double(490, 800, 480, "zeros");
	double *D = create_one_dim_double(300, "zeros");

	for (int a = 5; a < 298; a++)
	{
	  
	    A[a][a][a]=A[a][a-4][a-2]*B[a]/C[a][a][a];
	  
	    B[a]=0.408;
	    float  var_a=B[a]/0.855;
	  
	    B[a]=B[a-2]*0.56;
	  
	    B[a]=B[a+1]+0.257;
	  
	    C[a][a][a]=C[a+1][a+4][a+1]*0.177;
	  
	    D[a]=C[a][a][a]*A[a][a][a];
	    D[a+2]=C[a][a][a]*B[a];
	  
	    A[a][a][a]=D[a]/C[a][a][a]*B[a];
	}

    return 0;
}