#include <iostream>
#include <string>
using namespace std;
class Temperature
{
protected:
	int temperatura = 90;//температура
	string temperatura;
public:
	int getTemperature() {
		return temperatura;
	}
	string getTemperatura() {
		return temperatura;

	}
	void show_temerature() {
		cout << "температура:" << getTemperature << endl;

	}
	void set_temperature(char) {
		do {
			char ans;
			switch (ans) {
			case 75:
				cout << "температура:\n" << getTemperature << "temperatura + 1 = " << temperatura + 1 = << endl;
				break;
			case 93:
				cout << "температура:\n" << getTemperature << "temperatura - 1 = " << temperatura - 1 = << endl;
				break;
			case 27:
				return 0;
				break;
			default:
				cout << "Error";
			}




		}while(ans == 13	)



	}

};

