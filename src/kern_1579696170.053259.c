#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(520, "ones");
	int *C = create_one_dim_int(600, "ones");
	int **A = create_two_dim_int(590, 250, "ones");
	int **B = create_two_dim_int(440, 180, "ones");
	int **E = create_two_dim_int(460, 750, "ones");

	for (int c = 3; c < 248; c++)
	  for (int b = 5; b < 460; b++)
	    for (int a = 5; a < 460; a++)
	    {
	      
	      A[a][b]=A[a-2][b]*39;
	      
	      C[a]=C[a-5]*A[a][b]-E[a][b]+D[a];
	      
	      A[a][b]=A[a+1][b+2]-43;
	      
	      E[a][b]=E[a][b+1]*16;
	      
	      int var_a=E[a][b]+20;
	      int var_b=E[a-1][b-3]+1;
	    }

    return 0;
}