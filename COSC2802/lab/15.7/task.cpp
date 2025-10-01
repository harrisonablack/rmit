#include "task.h"

void modifyDoubleByPointer(double* d) {
	*d *= 10.0;
}
void modifyDoubleByReference(double& d) {
	d *= 10.0;
}

