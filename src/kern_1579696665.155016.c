#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(910, "zeros");
	int **A = create_two_dim_int(550, 380, "zeros");

	for (int c = 3; c < 376; c++)
	  for (int b = 5; b < 548; b++)
	    for (int a = 5; a < 548; a++)
	    {
	      
	      A[a][b]=A[a-4][b-3]+27;
	      
	      B[a]=A[a][b];
	      B[a-5]=A[a][b];
	      
	      int var_a=A[a][b]*45;
	      int var_b=A[a-2][b-2]-22;
	      
	      int var_c=A[a][b]/11;
	      int var_d=A[a+2][b+4]*17;
	      
	      B[a]=A[a][b]*B[a];
	      A[a][b]=A[a+1][b]/B[a];
	      
	      B[a]=A[a][b]+B[a];
	      A[a][b]=A[a-1][b]+B[a];
	      
	      int var_e=B[a]*27;
	      int var_f=B[a-5]+20;
	    }

    return 0;
}