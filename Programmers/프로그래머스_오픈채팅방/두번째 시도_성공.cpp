#include<iostream>
#include <map>
#include <string>
#include<vector>
#include<sstream>


using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string> str;
	vector<string> check_id;
	string decomposition;
	map<string, string>input_str;

	stringstream ss;
    string id;
	string nick;
	for (int i = 0; i < record.size(); i++) {
		ss.str(record[i]);
		ss >> decomposition;
		if (decomposition == "Enter") {
			ss >> id;
			ss >> nick;
			str.push_back("님이 들어왔습니다.");
			check_id.push_back(id);
			input_str[id] = nick;
		}
		else if (decomposition == "Leave") {
			ss >> id;
			str.push_back("님이 나갔습니다.");
			check_id.push_back(id);
		}
		else if(decomposition == "Change") {
			ss >> id;
			ss >> nick;
			input_str[id] = nick;
		}
        ss.clear();
	}

	for (int i = 0; i < str.size(); i++) {
		str[i] =  input_str[check_id[i]] + str[i];
	}
    return str;
}
