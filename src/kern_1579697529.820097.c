#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(690, "ones");
	int ***A = create_three_dim_int(890, 820, 140, "ones");
	int *C = create_one_dim_int(380, "ones");
	int *D = create_one_dim_int(430, "ones");

	for (int c = 5; c < 138; c++)
	  for (int b = 3; b < 820; b++)
	    for (int a = 5; a < 380; a++)
	    {
	      
	      C[a]=C[a-5]+A[a][b][c]*D[a];
	      
	      A[a][b][c]=A[a-4][b-3][c-5]+1-B[a];
	      
	      B[a]=B[a+1]+D[a]/A[a][b][c]-C[a];
	      
	      int var_a=C[a]+49;
	      C[a]=10;
	      
	      A[a][b][c]=12;
	      
	      B[a]=A[a][b][c]+C[a];
	      
	      int var_b=B[a]*14;
	    }

    return 0;
}