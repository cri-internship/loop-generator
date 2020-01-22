#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(940, "zeros");
	int *C = create_one_dim_int(770, "zeros");
	int ***B = create_three_dim_int(550, 790, 540, "zeros");
	int **A = create_two_dim_int(920, 580, "zeros");

	for (int b = 3; b < 575; b++)
	  for (int a = 3; a < 548; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-3][a-2]*D[a];
	    
	     A[a][b]=A[a+2][b+5]-19;
	    
	     C[a]=C[a+5]-14;
	    
	     C[a]=A[a][b];
	    
	     B[a][b][a]=B[a][b][a]/C[a];
	     A[a][b]=B[a+2][b+4][a+2]*C[a];
	    
	     C[a]=A[a][b]-C[a]+B[a][b][a]*D[a];
	     D[a]=A[a-3][b-1]+B[a][b][a]-4/D[a];
	  }

    return 0;
}