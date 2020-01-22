#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(830, 980, 810, "ones");
	int ***A = create_three_dim_int(170, 980, 930, "ones");
	int *B = create_one_dim_int(200, "ones");
	int **C = create_two_dim_int(460, 620, "ones");
	int *E = create_one_dim_int(20, "ones");

	for (int b = 2; b < 620; b++)
	  for (int a = 5; a < 18; a++)
	  {
	    
	     C[a][b]=C[a-2][b]*17;
	    
	     E[a]=E[a-4]/28;
	    
	     E[a]=E[a-3]+22*C[a][b]-B[a]/D[a][b][a];
	    
	     E[a]=E[a+2]-37;
	    
	     C[a][b]=C[a+5][b]-E[a]/D[a][b][a]*A[a][b][a];
	  }

    return 0;
}