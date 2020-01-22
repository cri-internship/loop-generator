#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(100, "random");
	int *D = create_one_dim_int(910, "random");
	int ***A = create_three_dim_int(950, 420, 840, "random");
	int **E = create_two_dim_int(330, 110, "random");
	int **B = create_two_dim_int(810, 350, "random");

	for (int c = 0; c < 835; c++)
	  for (int b = 0; b < 419; b++)
	    for (int a = 0; a < 100; a++)
	    {
	      
	      C[a]=17;
	      float  var_a=C[a]*36;
	      
	      A[a][b][c]=A[a+1][b+1][c+2]*4;
	      
	      int var_b=C[a]/43;
	      C[a]=0;
	      
	      A[a][b][c]=A[a+4][b][c+5]-6;
	      
	      D[a]=41;
	      D[a]=A[a][b][c]-B[a][b]*A[a][b][c];
	    }

    return 0;
}