#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(150, 300, 980, "ones");
	int *E = create_one_dim_int(480, "ones");
	int *B = create_one_dim_int(150, "ones");
	int *D = create_one_dim_int(660, "ones");
	int *A = create_one_dim_int(310, "ones");

	for (int b = 2; b < 297; b++)
	  for (int a = 5; a < 148; a++)
	  {
	    
	     A[a]=A[a-5]+5;
	    
	     A[a]=A[a+2]*38;
	    
	     C[a][b][a]=40;
	     C[a-3][b-2][a]=28;
	    
	     E[a]=33;
	     E[a-5]=2;
	    
	     C[a][b][a]=C[a][b][a]/E[a]*D[a]-A[a]+B[a];
	     B[a]=C[a+2][b+3][a+1]-41*D[a]/E[a]+B[a];
	  }

    return 0;
}