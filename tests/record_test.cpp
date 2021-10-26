/*
    Main for Record testing
*/

#include "../lib/record.h"
#include "assert.h"

void timestamp_test(char* t) {
    assert(t != NULL);
    printf("TEST TIME: %s\n", t);
}

void body_test(const char* m) {
    assert(m != NULL);
    printf("TEST BODY: %s\n", m);
}

void record_test() {
    
}

int main() {
    printf("TEST: record\n");
    Message fake_msg;
    fake_msg.setbody("Testing my fake messages.");

    body_test(fake_msg.body);
    timestamp_test(fake_msg.gettime());
    record("** record TEST completed **");
    return 0;
}