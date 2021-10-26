/*
    Main for Record testing
*/

#include "../lib/record.h"
#include "assert.h"

void body_test(const char* m) {
    assert(m != NULL);
}

void timestamp_test(struct tm t) {
    //cout << t << "\n";
}

int main() {
    Message fake_msg;
    fake_msg.setbody("Testing my fake messages.");

    body_test(fake_msg.body);
    timestamp_test(fake_msg.gettime());

    return 0;
}