#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(470, "zeros");
	int **C = create_two_dim_int(410, 680, "zeros");
	int ***D = create_three_dim_int(280, 990, 390, "zeros");
	int ***B = create_three_dim_int(570, 600, 960, "zeros");
	int ***E = create_three_dim_int(10, 350, 220, "zeros");

	for (int b = 2; b < 345; b++)
	  for (int a = 3; a < 5; a++)
	  {
	    
	     C[a][b]=C[a-3][b-2]-A[a]*B[a][b][a]+D[a][b][a];
	    
	     C[a][b]=C[a+4][b+3]/E[a][b][a];
	    
	     B[a][b][a]=B[a+4][b+1][a+5]/13;
	    
	     C[a][b]=C[a+1][b]*41;
	    
	     E[a][b][a]=E[a+5][b+5][a+4]+C[a][b]-21;
	  }

    return 0;
}