/*
	Record tests
*/

#include <assert.h>
#include <string>
#include <sys/stat.h>
#include "../lib/record.h"

void timestamp_test(char* t) {
    assert(t != NULL);
    printf("TEST TIME: %s\n", t);
}

void body_test(const char* m) {
    assert(m != NULL);
    printf("TEST BODY: %s\n", m);
}

bool record_test(const std::string& name) {

    struct stat buffer;   
    bool a = stat (name.c_str(), &buffer) == 0;
    assert(a != 0);
}