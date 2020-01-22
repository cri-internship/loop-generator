#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(460, 630, "ones");
	int ***A = create_three_dim_int(330, 420, 220, "ones");

	for (int b = 2; b < 420; b++)
	  for (int a = 5; a < 330; a++)
	  {
	    
	     B[a][b]=B[a+2][b+2]-A[a][b][a];
	    
	     B[a][b]=B[a+3][b+4]*A[a][b][a];
	    
	     B[a][b]=B[a+4][b+5]*48;
	    
	     int var_a=B[a][b]*28;
	     int var_b=B[a+3][b+1]*37;
	    
	     B[a][b]=B[a][b]+A[a][b][a];
	     A[a][b][a]=B[a-5][b]-A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]+B[a][b];
	     A[a][b][a]=A[a-2][b-2][a-2]-B[a][b];
	  }

    return 0;
}