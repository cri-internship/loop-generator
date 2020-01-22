#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(140, 1000, 230, "zeros");
	int *B = create_one_dim_int(880, "zeros");
	int **A = create_two_dim_int(60, 830, "zeros");
	int ***E = create_three_dim_int(620, 320, 30, "zeros");
	int **C = create_two_dim_int(780, 760, "zeros");

	for (int b = 5; b < 319; b++)
	  for (int a = 0; a < 57; a++)
	  {
	    
	     C[a][b]=C[a][b-5]*B[a];
	    
	     int var_a=B[a]*4;
	     B[a]=12;
	    
	     E[a][b][a]=E[a][b][a]*C[a][b]/A[a][b];
	     D[a][b][a]=E[a+4][b+1][a+3]+13*A[a][b]/D[a][b][a];
	    
	     int var_b=A[a][b]-40;
	     int var_c=A[a+3][b]+5;
	  }

    return 0;
}