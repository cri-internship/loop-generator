#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(620, 250, "random");
	int **B = create_two_dim_int(740, 100, "random");
	int **D = create_two_dim_int(350, 420, "random");
	int ***C = create_three_dim_int(420, 970, 940, "random");

	for (int b = 4; b < 95; b++)
	  for (int a = 5; a < 415; a++)
	  {
	    
	     A[a][b]=A[a-1][b-4]+D[a][b]-B[a][b];
	    
	     C[a][b][a]=C[a+2][b+1][a]/A[a][b]-B[a][b];
	    
	     B[a][b]=B[a+3][b+5]/C[a][b][a]*D[a][b];
	    
	     A[a][b]=27;
	    
	     C[a][b][a]=C[a][b][a]*B[a][b]/D[a][b]+A[a][b];
	     D[a][b]=C[a+2][b][a+5]*45-B[a][b];
	  }

    return 0;
}