#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(880, 220, "zeros");
	int *D = create_one_dim_int(380, "zeros");
	int *B = create_one_dim_int(550, "zeros");
	int ***E = create_three_dim_int(710, 150, 810, "zeros");
	int *C = create_one_dim_int(510, "zeros");

	for (int b = 3; b < 147; b++)
	  for (int a = 5; a < 550; a++)
	  {
	    
	     B[a]=B[a-5]/0;
	    
	     E[a][b][a]=E[a+1][b+2][a+3]-A[a][b]+C[a]/B[a]*D[a];
	    
	     E[a][b][a]=4;
	    
	     A[a][b]=6;
	     A[a-1][b-1]=45;
	    
	     E[a][b][a]=E[a][b][a]/D[a];
	     A[a][b]=E[a+3][b+3][a+4]-B[a]/A[a][b]*D[a];
	    
	     int var_a=A[a][b]+10;
	     int var_b=A[a-1][b-1]+29;
	  }

    return 0;
}