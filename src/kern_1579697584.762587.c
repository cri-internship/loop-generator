#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(110, 550, 220, "ones");
	double *D = create_one_dim_double(470, "ones");
	double ***A = create_three_dim_double(100, 350, 720, "ones");
	double *B = create_one_dim_double(80, "ones");

	for (int a = 4; a < 75; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-4][a-2]/D[a];
	  
	    D[a]=D[a+3]*0.002;
	  
	    B[a]=B[a+5]/A[a][a][a]-A[a][a][a]*D[a];
	  
	    D[a]=D[a+2]-0.519+B[a]*C[a][a][a];
	  
	    A[a][a][a]=A[a][a+4][a+4]*0.521;
	  
	    C[a][a][a]=B[a]*A[a][a][a]/D[a];
	}

    return 0;
}