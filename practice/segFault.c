// segmentation fault

// When you write a "string" in your source code, 
// it gets written directly into the executable 
// because that value needs to be known at compile 
// time. The data in the executable image is read-only.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLowerCase(char* str);

int main() {
	char* str = "An Introduction to C";
	// char str[] = "An Introduction to C";

	toLowerCase(str);
	printf("result = %s", str);
}

void toLowerCase(char* str) {
	int size = strlen(str);
	for (int i = 0; i < size; i ++) {
		if (str[i] <= 'a' && str[i] != ' ') { 
			str[i] = (char) (str[i] - 'A' + 'a');
		}
	}
}