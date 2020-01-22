#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(820, 530, 970, "ones");
	int *B = create_one_dim_int(910, "ones");
	int ***C = create_three_dim_int(460, 300, 610, "ones");
	int *D = create_one_dim_int(970, "ones");
	int *E = create_one_dim_int(980, "ones");

	for (int b = 0; b < 300; b++)
	  for (int a = 3; a < 455; a++)
	  {
	    
	     E[a]=E[a-3]-A[a][b][a]/D[a]*B[a]+C[a][b][a];
	    
	     E[a]=C[a][b][a]+E[a]-A[a][b][a]*E[a];
	     D[a]=C[a+3][b][a+5]*A[a][b][a]+30-E[a];
	    
	     A[a][b][a]=D[a]*A[a][b][a]/E[a];
	     B[a]=D[a+4]/A[a][b][a]-0+E[a];
	  }

    return 0;
}