#include <iostream>
#include <string>
#include <windows.h>

using namespace std; 

const string cmd1p1 = "curl -i -H \"Accept: application/json\" -H \"Content-Type:application/json\" -X POST --data \"{\\\"content\\\": \\\"";
const string cmd1p2 = "\\\"}\" ";

const string cmd2p1 = "curl -F \"file1=@";

using namespace std;

void SendText(string text, string webhook_url) {

	string cmd = cmd1p1 + text + cmd1p2 + webhook_url;

	system(cmd.c_str());

}

void SendFile(string path, string webhook_url) {

	string cmd = cmd2p1 + path + "\" " + webhook_url;

	system(cmd.c_str());

}