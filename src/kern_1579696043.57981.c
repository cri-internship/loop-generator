#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(250, 710, "random");
	int *B = create_one_dim_int(690, "random");
	int *C = create_one_dim_int(630, "random");

	for (int c = 2; c < 707; c++)
	  for (int b = 0; b < 245; b++)
	    for (int a = 0; a < 245; a++)
	    {
	      
	      A[a][b]=A[a][b-2]*5;
	      
	      C[a]=C[a+4]-18;
	      
	      int var_a=C[a]-18;
	      int var_b=C[a+1]-12;
	      
	      int var_c=A[a][b]+8;
	      int var_d=A[a+5][b]/20;
	      
	      B[a]=A[a][b]/C[a];
	      A[a][b]=A[a][b+3]+B[a]*19;
	      
	      C[a]=C[a]*15;
	      A[a][b]=C[a+5]-B[a]*A[a][b];
	      
	      int var_e=B[a]-40;
	      int var_f=B[a+4]-2;
	    }

    return 0;
}