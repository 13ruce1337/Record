/*
	Record

	Logging library for errors and such.
	ex) record("Hanzo shot first.")
*/

#include <iostream>
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

class Message {
private:
	tm timestamp;
public:
	const char* body=NULL;
	const char* record = "/tmp/record.log";

	struct tm settime(void);
	struct tm gettime(void);
	void setbody(const char* m);
};

// sets the timestamp for the message
struct tm Message::settime() {
	//char s[200];
	time_t now = time(NULL);
	struct tm* p = localtime(&now);
	//timestamp = strftime(s, 200, "%A, %B %d %Y %H:%M:%S", p);
	return p;
}

struct tm Message::gettime() {
	return timestamp;
}

// sets the body of the message
void Message::setbody(const char* m) {
	Message::settime();
	body = m;
}

// main function to create a message
void record(const char* message) {
	Message msg;
	ofstream record;

	msg.setbody(message);
	printf("%i: %s", msg.gettime(), message);

	//record.open(msg.record, std::ios_base::app);
	//record << msg.gettime() << ": " << msg.body << "\n";
	//record.close();	
}