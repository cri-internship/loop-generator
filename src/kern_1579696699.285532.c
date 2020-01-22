#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(530, 620, 400, "random");
	int ***A = create_three_dim_int(670, 920, 640, "random");
	int *B = create_one_dim_int(480, "random");

	for (int b = 5; b < 620; b++)
	  for (int a = 5; a < 477; a++)
	  {
	    
	     B[a]=B[a-1]+C[a][b][a]*A[a][b][a];
	    
	     B[a]=37;
	    
	     C[a][b][a]=B[a]/33;
	     C[a-5][b-5][a-5]=12-B[a];
	    
	     int var_a=C[a][b][a]+13;
	     int var_b=C[a-2][b-4][a-2]*7;
	    
	     int var_c=C[a][b][a]*16;
	     int var_d=C[a-5][b-5][a]-42;
	    
	     C[a][b][a]=C[a][b][a]+A[a][b][a]/B[a];
	     B[a]=C[a+2][b][a]*30;
	  }

    return 0;
}