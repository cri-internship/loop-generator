#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(810, "random");
	int *A = create_one_dim_int(880, "random");
	int *B = create_one_dim_int(170, "random");

	for (int c = 5; c < 165; c++)
	  for (int b = 5; b < 165; b++)
	    for (int a = 5; a < 165; a++)
	    {
	      
	      B[a]=B[a-1]+34;
	      
	      C[a]=C[a-5]-0;
	      
	      C[a]=C[a+3]*A[a];
	      
	      B[a]=37;
	      
	      C[a]=C[a]*21;
	      A[a]=C[a-1]/39;
	    }

    return 0;
}