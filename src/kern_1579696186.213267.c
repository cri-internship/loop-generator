#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(430, 820, 380, "ones");
	double ***B = create_three_dim_double(410, 400, 650, "ones");
	double **A = create_two_dim_double(450, 620, "ones");

	for (int a = 5; a < 430; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-3][a-4]/A[a][a]*B[a][a][a];
	  
	    A[a][a]=A[a-4][a-4]-0.342;
	  
	    A[a][a]=A[a+4][a]-C[a][a][a]*0.031;
	  
	    C[a][a][a]=0.572;
	}

    return 0;
}