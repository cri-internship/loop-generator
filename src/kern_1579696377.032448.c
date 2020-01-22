#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(310, 60, 610, "zeros");
	float *C = create_one_dim_float(1000, "zeros");
	float **A = create_two_dim_float(300, 100, "zeros");
	float *D = create_one_dim_float(340, "zeros");

	for (int a = 5; a < 295; a++)
	{
	  
	    C[a]=C[a-5]-B[a][a][a];
	  
	    A[a][a]=A[a+5][a+3]+0.064;
	  
	    C[a]=0.493;
	  
	    D[a]=0.708;
	    D[a]=0.182;
	  
	    float var_a=A[a][a]-0.551;
	    float var_b=A[a-2][a-5]/0.513;
	  
	    float var_c=D[a]*0.774;
	    float var_d=D[a+3]*0.856;
	}

    return 0;
}