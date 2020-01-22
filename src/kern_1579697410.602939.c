#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(220, "ones");
	int *A = create_one_dim_int(170, "ones");
	int *B = create_one_dim_int(140, "ones");
	int **E = create_two_dim_int(290, 10, "ones");
	int **D = create_two_dim_int(380, 950, "ones");

	for (int b = 5; b < 139; b++)
	  for (int a = 5; a < 139; a++)
	  {
	    
	     B[a]=B[a+1]/D[a][b]+C[a]*A[a]-E[a][b];
	    
	     C[a]=21;
	     C[a+5]=28;
	    
	     B[a]=40;
	    
	     A[a]=C[a]*B[a]-A[a]/E[a][b]+D[a][b];
	     C[a]=C[a+2]-A[a]+E[a][b]*D[a][b];
	  }

    return 0;
}