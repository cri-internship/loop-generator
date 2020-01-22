#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(220, "random");
	float **D = create_two_dim_float(810, 430, "random");
	float ***B = create_three_dim_float(470, 100, 960, "random");
	float *A = create_one_dim_float(820, "random");
	float ***E = create_three_dim_float(720, 510, 390, "random");

	for (int a = 0; a < 220; a++)
	{
	  
	    A[a]=A[a+1]+D[a][a]*B[a][a][a]/E[a][a][a];
	  
	    B[a][a][a]=B[a+1][a+3][a+5]+0.133;
	  
	    B[a][a][a]=0.94;
	  
	    C[a]=0.669;
	    C[a]=0.899;
	}

    return 0;
}