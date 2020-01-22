#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(350, 180, "zeros");
	int **B = create_two_dim_int(340, 690, "zeros");
	int *C = create_one_dim_int(100, "zeros");
	int *D = create_one_dim_int(370, "zeros");

	for (int b = 3; b < 180; b++)
	  for (int a = 2; a < 95; a++)
	  {
	    
	     D[a]=B[a][b]-C[a];
	     C[a]=D[a]*A[a][b]/B[a][b];
	    
	     C[a]=C[a+5]*D[a]-D[a]/A[a][b];
	    
	     B[a][b]=30;
	     B[a+3][b+2]=18;
	    
	     A[a][b]=A[a][b]/B[a][b]-C[a]*D[a];
	     B[a][b]=A[a-2][b-3]/B[a][b]-D[a]+C[a];
	  }

    return 0;
}