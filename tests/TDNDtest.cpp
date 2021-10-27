/*
    TDND test main
*/

#include "record_test.h"

int main() {
    printf("TEST: record\n");

    // create a fake message
    Message fake_msg;
    fake_msg.setbody("Testing my fake messages.");

    // start the tests
    body_test(fake_msg.getbody());
    timestamp_test(fake_msg.gettime());
    record("starting log file for test...");
    record_test(fake_msg.record);
    record("** record TEST completed **");
    return 0;
}