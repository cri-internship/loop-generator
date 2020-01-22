#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(80, 540, "ones");
	double *C = create_one_dim_double(740, "ones");
	double ***D = create_three_dim_double(1000, 820, 370, "ones");
	double *B = create_one_dim_double(690, "ones");

	for (int a = 5; a < 80; a++)
	{
	  
	    A[a][a]=A[a-1][a-3]-0.021;
	  
	    C[a]=C[a-3]/B[a]-A[a][a]*D[a][a][a];
	  
	    D[a][a][a]=D[a-3][a-5][a]-C[a];
	  
	    C[a]=C[a-2]+B[a]*A[a][a];
	  
	    C[a]=C[a+2]-D[a][a][a]/A[a][a];
	  
	    B[a]=0.41;
	    B[a-5]=0.972;
	  
	    B[a]=B[a]+C[a]/D[a][a][a]-0.938;
	    C[a]=B[a-2]*A[a][a];
	}

    return 0;
}