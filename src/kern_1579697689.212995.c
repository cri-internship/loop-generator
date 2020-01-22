#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(140, "zeros");
	int *C = create_one_dim_int(400, "zeros");
	int **A = create_two_dim_int(910, 310, "zeros");
	int **B = create_two_dim_int(760, 810, "zeros");

	for (int d = 5; d < 305; d++)
	  for (int c = 2; c < 137; c++)
	    for (int b = 2; b < 137; b++)
	      for (int a = 2; a < 137; a++)
	      {
	        
	       A[a][b]=A[a-2][b-5]+32;
	        
	       B[a][b]=B[a-1][b]+45;
	        
	       D[a]=D[a+3]*A[a][b]-C[a]+B[a][b];
	        
	       D[a]=35;
	        
	       int var_a=A[a][b]*48;
	       int var_b=A[a+1][b+5]-13;
	        
	       B[a][b]=C[a]*D[a]/A[a][b]-D[a];
	      }

    return 0;
}