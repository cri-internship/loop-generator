#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(240, "zeros");
	int **A = create_two_dim_int(360, 130, "zeros");
	int *B = create_one_dim_int(890, "zeros");
	int **C = create_two_dim_int(620, 980, "zeros");

	for (int b = 5; b < 127; b++)
	  for (int a = 3; a < 240; a++)
	  {
	    
	     C[a][b]=C[a][b-5]*46;
	    
	     D[a]=D[a-3]/B[a]*A[a][b]+C[a][b];
	    
	     D[a]=5;
	    
	     C[a][b]=D[a]-A[a][b];
	    
	     C[a][b]=A[a][b]+B[a]/D[a]-C[a][b];
	     D[a]=A[a+2][b+3]*C[a][b];
	  }

    return 0;
}