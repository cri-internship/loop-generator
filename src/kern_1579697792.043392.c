#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(20, "zeros");
	int **C = create_two_dim_int(830, 420, "zeros");
	int ***E = create_three_dim_int(830, 320, 630, "zeros");
	int ***A = create_three_dim_int(410, 220, 560, "zeros");
	int *B = create_one_dim_int(580, "zeros");

	for (int b = 4; b < 315; b++)
	  for (int a = 4; a < 20; a++)
	  {
	    
	     C[a][b]=C[a-2][b-4]/A[a][b][a]*B[a];
	    
	     E[a][b][a]=E[a+2][b+5][a+5]*D[a]/C[a][b];
	    
	     C[a][b]=C[a][b+3]+31;
	    
	     D[a]=E[a][b][a]*C[a][b]+B[a];
	     D[a-4]=C[a][b]+A[a][b][a]/E[a][b][a]*B[a];
	    
	     E[a][b][a]=A[a][b][a]+B[a];
	    
	     int var_a=B[a]+23;
	     int var_b=B[a-3]*9;
	  }

    return 0;
}