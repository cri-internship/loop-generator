#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(410, 130, 770, "zeros");
	int **B = create_two_dim_int(150, 930, "zeros");
	int ***E = create_three_dim_int(890, 360, 870, "zeros");
	int **D = create_two_dim_int(1000, 1000, "zeros");
	int ***A = create_three_dim_int(950, 600, 210, "zeros");

	for (int b = 5; b < 130; b++)
	  for (int a = 4; a < 408; a++)
	  {
	    
	     D[a][b]=D[a-3][b-3]-E[a][b][a]+B[a][b];
	    
	     E[a][b][a]=E[a+5][b+2][a]/D[a][b]+C[a][b][a];
	    
	     C[a][b][a]=13;
	     C[a-2][b-3][a-2]=11;
	    
	     C[a][b][a]=31+B[a][b];
	    
	     A[a][b][a]=C[a][b][a]-D[a][b]/E[a][b][a];
	     E[a][b][a]=C[a-4][b-5][a-1]+14;
	    
	     int var_a=A[a][b][a]*28;
	     int var_b=A[a][b][a]+5;
	  }

    return 0;
}