#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(820, "zeros");
	double *C = create_one_dim_double(110, "zeros");
	double ***A = create_three_dim_double(100, 420, 210, "zeros");

	for (int a = 3; a < 95; a++)
	{
	  
	    B[a]=B[a-1]/A[a][a][a]+C[a];
	  
	    C[a]=C[a+5]*0.985;
	  
	    A[a][a][a]=A[a+1][a+4][a+5]*0.392;
	  
	    A[a][a][a]=0.273;
	  
	    B[a]=B[a]+A[a][a][a];
	    A[a][a][a]=B[a+3]/C[a];
	  
	    C[a]=C[a]+0.738;
	    B[a]=C[a+1]-A[a][a][a];
	  
	    A[a][a][a]=B[a]*A[a][a][a]-0.983;
	    C[a]=B[a-3]*0.684;
	}

    return 0;
}