#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(820, "ones");
	int ***A = create_three_dim_int(620, 480, 210, "ones");

	for (int b = 2; b < 476; b++)
	  for (int a = 5; a < 615; a++)
	  {
	    
	     B[a]=19;
	     B[a-3]=24;
	    
	     B[a]=B[a]-A[a][b][a];
	     A[a][b][a]=B[a]/A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]/B[a];
	     B[a]=A[a][b-2][a-3]+40;
	    
	     int var_a=A[a][b][a]*10;
	     int var_b=A[a+2][b+4][a+5]*43;
	    
	     int var_c=B[a]/37;
	     int var_d=B[a-2]-5;
	    
	     B[a]=B[a]+A[a][b][a];
	     A[a][b][a]=B[a-5]+25;
	  }

    return 0;
}