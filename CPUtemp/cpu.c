// 
// CPU temperature MacOS
// Hudson Schumaker
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// sudo powermetrics -s thermal | grep -A2 -i thermal	
	system("sudo powermetrics --samplers smc |grep -i \"CPU die temperature\"");
	return 0; 
}
