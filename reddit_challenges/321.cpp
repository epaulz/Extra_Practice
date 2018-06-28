#include <iostream>
#include <string>

using namespace std;

void alarmClock(string S){
	int hour = stoi(S.substr(0,2));
	int minute = stoi(S.substr(3,5));
	
	string am_pm = "am";
	string ones[20] = {"twelve","one","two","three","four","five","six","seven","eight",
						         "nine","ten","eleven","twelve","thirteen","fourteen",
								 "fifteen","sixteen","seventeen","eighteen","nineteen"};
	string tens[4]   =  {"twenty","thirty","forty","fifty"};
	
	if(hour > 11)
		am_pm = "pm";
	
	if(hour==0 && minute==0)
		cout << "It's midnight.\n";
	else if(hour==12 && minute==0)
		cout << "It's noon.\n";
	else{
		if(minute==0)
			cout << "It's " << ones[hour%12] << " " << am_pm << endl;
		else if(minute%10==0)
			cout << "It's " << ones[hour%12] << " " << tens[(minute/10)-2] << " " << am_pm << endl;
		else if(minute < 10)
			cout << "It's " << ones[hour%12] << " oh " << ones[minute%10] << " " << am_pm << endl;
		else if(minute > 20)
			cout << "It's " << ones[hour%12] << " " << tens[(minute/10)-2] << " " << ones[minute%10] << " " << am_pm << endl;
		else
			cout << "It's " << ones[hour%12] << " " << ones[minute] << " " << am_pm << endl;
	}
}

int main(){
	alarmClock("00:00");
	alarmClock("01:30");
	alarmClock("12:05");
	alarmClock("14:01");
	alarmClock("20:29");
	alarmClock("21:00");
	
	return 0;
}