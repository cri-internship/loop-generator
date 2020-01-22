#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(290, "zeros");
	int **D = create_two_dim_int(330, 720, "zeros");
	int **C = create_two_dim_int(730, 440, "zeros");
	int *A = create_one_dim_int(200, "zeros");
	int **B = create_two_dim_int(400, 480, "zeros");

	for (int b = 4; b < 440; b++)
	  for (int a = 4; a < 200; a++)
	  {
	    
	     C[a][b]=C[a-4][b-4]*B[a][b]-A[a]/E[a];
	    
	     E[a]=C[a][b]-D[a][b]*A[a]+C[a][b];
	     E[a+4]=C[a][b]/D[a][b];
	    
	     B[a][b]=E[a]*A[a]/C[a][b]+47;
	     B[a+5][b+1]=C[a][b]*E[a]-D[a][b];
	    
	     A[a]=31;
	     A[a-4]=48;
	  }

    return 0;
}