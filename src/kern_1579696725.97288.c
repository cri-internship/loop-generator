#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(90, 80, "zeros");
	float ***A = create_three_dim_float(930, 860, 280, "zeros");
	float ***B = create_three_dim_float(650, 680, 310, "zeros");

	for (int a = 5; a < 90; a++)
	{
	  
	    A[a][a][a]=A[a-1][a][a-5]-0.923;
	  
	    B[a][a][a]=B[a][a+3][a+5]/0.958;
	  
	    B[a][a][a]=B[a+3][a+1][a+5]-0.284;
	  
	    A[a][a][a]=0.774;
	  
	    C[a][a]=C[a][a]/A[a][a][a]+B[a][a][a];
	    A[a][a][a]=C[a-1][a-1]-0.006*B[a][a][a];
	}

    return 0;
}