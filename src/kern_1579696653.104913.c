#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(170, "zeros");
	int *C = create_one_dim_int(30, "zeros");
	int *A = create_one_dim_int(480, "zeros");

	for (int c = 5; c < 25; c++)
	  for (int b = 5; b < 25; b++)
	    for (int a = 5; a < 25; a++)
	    {
	      
	      B[a]=B[a-5]/25;
	      
	      A[a]=B[a]*C[a];
	      
	      A[a]=A[a+5]*1;
	      
	      C[a]=B[a]/50;
	      C[a+5]=B[a];
	      
	      B[a]=C[a]+B[a]-A[a];
	      C[a]=C[a+1]+A[a]*B[a];
	    }

    return 0;
}