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
	tm* timestamp;
	char tstr[50];
public:
	const char* body = NULL;
	const char* record = "/tmp/record.log";

	struct tm* settime(void);
	char* gettime(void);
	void setbody(const char* m);
	void makerecord(void);
};

// sets the timestamp for the message
struct tm* Message::settime() {
	time_t now = time(NULL);
	struct tm* p = localtime(&now);
	timestamp = p;
}

// gets the timestamp for a message then parses the data
char* Message::gettime() {
	strftime(tstr, 50, "%A, %B %d %Y %H:%M:%S", timestamp);
	return tstr;
}

// sets the body of the message
void Message::setbody(const char* m) {
	Message::settime();
	body = m;
}

void Message::makerecord() {
	ofstream record;
	record.open(Message::record, std::ios_base::app);
	record << Message::gettime() << ": " << Message::body << "\n";
	record.close();
}

// main function to create a message
void record(const char* message) {
	Message msg;
	msg.setbody(message);
	printf("%s: %s \n", msg.gettime(), msg.body);
	msg.makerecord();
}