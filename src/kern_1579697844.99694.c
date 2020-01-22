#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(680, "ones");
	int *D = create_one_dim_int(810, "ones");
	int *B = create_one_dim_int(790, "ones");
	int *A = create_one_dim_int(170, "ones");

	for (int a = 3; a < 170; a++)
	{
	  
	    B[a]=B[a-3]*13;
	  
	    C[a]=C[a-3]*45;
	  
	    A[a]=A[a-2]+B[a]/C[a];
	  
	    D[a]=18;
	    float  var_a=D[a]*20;
	  
	    D[a]=D[a+3]+A[a]-A[a];
	}

    return 0;
}