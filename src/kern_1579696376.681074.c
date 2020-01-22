#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(500, 610, 250, "ones");
	int *C = create_one_dim_int(300, "ones");
	int *A = create_one_dim_int(290, "ones");
	int **E = create_two_dim_int(160, 550, "ones");
	int ***B = create_three_dim_int(760, 130, 50, "ones");

	for (int b = 1; b < 130; b++)
	  for (int a = 5; a < 159; a++)
	  {
	    
	     C[a]=C[a-5]-8;
	    
	     B[a][b][a]=B[a-2][b-1][a]-18;
	    
	     C[a]=C[a-3]+D[a][b][a]/B[a][b][a]-A[a];
	    
	     E[a][b]=E[a+1][b]-14;
	    
	     D[a][b][a]=35;
	     D[a-5][b-1][a-1]=29;
	    
	     E[a][b]=C[a]+B[a][b][a]*D[a][b][a]-A[a]/42;
	     D[a][b][a]=C[a]-B[a][b][a]/E[a][b]+A[a]*D[a][b][a];
	  }

    return 0;
}