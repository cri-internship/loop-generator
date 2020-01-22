#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(990, 150, "ones");
	int **C = create_two_dim_int(400, 270, "ones");
	int *B = create_one_dim_int(80, "ones");
	int **E = create_two_dim_int(610, 470, "ones");
	int *A = create_one_dim_int(910, "ones");

	for (int b = 2; b < 150; b++)
	  for (int a = 4; a < 396; a++)
	  {
	    
	     C[a][b]=C[a-2][b]*E[a][b]/B[a]+14;
	    
	     E[a][b]=E[a-3][b-2]-11;
	    
	     D[a][b]=D[a-4][b-1]-36;
	    
	     D[a][b]=D[a-1][b]+44;
	    
	     E[a][b]=E[a][b+2]+A[a]-C[a][b]*C[a][b]/D[a][b];
	    
	     E[a][b]=A[a]/E[a][b];
	     C[a][b]=A[a+1]/B[a]+C[a][b]-E[a][b]*D[a][b];
	    
	     B[a]=C[a][b]+50;
	     A[a]=C[a+4][b+2]-E[a][b]/B[a]*A[a]+D[a][b];
	  }

    return 0;
}