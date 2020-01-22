#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(90, 870, 960, "zeros");
	int ***B = create_three_dim_int(50, 370, 130, "zeros");
	int ***D = create_three_dim_int(220, 430, 470, "zeros");
	int ***A = create_three_dim_int(370, 100, 200, "zeros");
	int *E = create_one_dim_int(430, "zeros");

	for (int b = 3; b < 96; b++)
	  for (int a = 4; a < 45; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+4][a]-11;
	    
	     B[a][b][a]=B[a+5][b+1][a]/13;
	    
	     E[a]=B[a][b][a]-A[a][b][a]*E[a]+C[a][b][a]/D[a][b][a];
	     B[a][b][a]=B[a+3][b][a+2]+D[a][b][a];
	    
	     D[a][b][a]=C[a][b][a]-25;
	     C[a][b][a]=C[a-4][b-3][a]*B[a][b][a]/A[a][b][a];
	    
	     A[a][b][a]=E[a]-D[a][b][a]+A[a][b][a]*C[a][b][a];
	     C[a][b][a]=E[a-4]/C[a][b][a]-D[a][b][a]+B[a][b][a]*A[a][b][a];
	  }

    return 0;
}