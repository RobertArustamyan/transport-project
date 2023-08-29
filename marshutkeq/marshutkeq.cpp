#include <iostream>
#include <string>
using namespace std;

const int N = 101;
const int n = 51;

string  AllStops[N] = { "fransiayihraparak", "mashtoctumanyan", "mashtocamiryan", "pakshuka","araratkonyak", "kentronakanavtokayan", "usadespanatun",
"razmakanvostikanutyun","ervanyanvelotrek", "admiralisakov/27","argavand","meqenagorcner", "parakar", "zvartnocAeroport" , "musaler", "ptxunk", "zvartnoc",
"m-3" , "aknalich" , "mecamor", "maisyan", "armavir", "avtokayanarmavir", "surbhripsime", "DprocN.2", "ejmiacin", "komitasi hraparak", "DprocN.3", "royalarmenia", "kvartalhaxtanak",
"haxtanakipoxoc","gusanasherama","tichina","zoravarandranik","erevancityoganov","erablur","citadel","bjshkakan","mxitarheracuhraparak",
"elektroset","infekcion","5/8nork","5/6nork"};
struct bus {
private:
	int num;//marshutki hamary
	string* stops = new string[N] {"\0"};//tvyal marshutki kangarnery 
public:
	bus(int x) { num = x; } // constructor sarqeluc x in talisenq en arjeqy vori hamarov pti lini marshutken
	void change_bus_num(int x);//marshutki hamary poxeumenq
	void display_set();//marshutki tvyalneri durs berum
	void set_bus_stop(int arr[N]);//kangarner avelacnelu hamar
	int m_name() { return num; }//m_name marshutki hamarna
	//~bus();//dekonstruktor
	string* begin_ptr = stops;
};

//bus::~bus()
//{
//	delete[] stops;
//	cout << num <<"-> objekty anjatvec\n";
//}

void bus::change_bus_num(int x) // marshutki hamary poxumenq x - ov
{
	cout << "Marshutki himikva hamary: " << num << "\n";
	cout << num << "->" << x << "\n";
	cout << "(1) ete poxvum e. (0) ete che: ";
	int simvol;
	cin >> simvol;
	if (simvol) num = x;
}

void bus::display_set() {
	cout << "Marshutki hamary: " << num << "\n";
	cout << "Marshutki kangarnery: ";
	int i = 0;
	while (stops[i] != "\0") {
		cout << "->" << stops[i];
		i++;
	}
	cout << "\n\n\n";

}

void bus::set_bus_stop(int arr[N]) {
	int i = 0;
	while (arr[i]) {
		stops[i] = AllStops[arr[i]];
		i++;
	}
}

bool check_bus(bus x,string a,string b);

int main()
{

	int* m100stops = new int[n] { 1, 2, 3, 4,5,6,7,8,9,10,11,12,13 };
	int* m235stops = new int[n] { 5, 6, 10, 11, 12, 14, 15,16, 17, 18, 19 };
	int* m206stops = new int[n] { 5, 6, 10, 11, 12, 14, 15,16, 17, 18, 19, 20, 21, 22 };
	int* m202stops= new int[n] { 5, 6, 10, 11, 12, 14, 15,16, 17, 23, 24, 25, 26, 27 };
	int* m77stops = new int[n] {28, 29, 30, 31, 32, 33, 34, 35, 6, 5, 4, 2, 1, 36, 36, 38, 39, 40, 41, 42};
	bus m1(100), m2(235), m3(206), m4(202), m5(77);
	m1.set_bus_stop(m100stops);
	m2.set_bus_stop(m235stops);
	m3.set_bus_stop(m206stops);
	m4.set_bus_stop(m202stops);
	m5.set_bus_stop(m77stops);
	delete[] m77stops, m202stops, m206stops, m235stops, m100stops;
	bus bus_array[] = { m1,m2, m3, m4, m5};

	int choise;
	int i;
	string frstop, tostop; //vortexic vortex
	do{
		cout << "Yntreq tarberakneric meky.\n";
		cout << "\t(1) Nayelu bolor marshutkeqi hamarnery.\n";
		cout << "\t(2) Marshutki chanpary.\n";
		cout << "\t(3) Vortexic vortexeq uzum gnaq.\n";
		cout << "\t(-1) Durs galu hamar.\n";
		cin >> choise;

		switch (choise)
		{
		case 1:
			i = 0;
			while (i < sizeof(bus_array) / sizeof(bus_array[0])) {
				cout << "<" << bus_array[i].m_name() << ">";
				i++;
			}
			cout << "\n";
			break;
		case 2:
			cout << "Greq marshutki hamary.\n";
			int x;
			cin >> x;
			for (i = 0; i < sizeof(bus_array) / sizeof(bus_array[0]); i++) {
				if (bus_array[i].m_name() == x) bus_array[i].display_set();
			}
			break;
		case 3:
			cout << "Greq vortexic eq uzum gnaq: ";
			cin >> frstop;
			cout << "Greq ur eq uzum gnaq: ";
			cin >> tostop;
			for (i = 0; i < sizeof(bus_array) / sizeof(bus_array[0]); i++) {
				if (check_bus(bus_array[i], frstop, tostop)) cout << bus_array[i].m_name() << "\n";
			}

			break;
		}

	} while (choise != -1);

	return 0;


}	
bool check_bus(bus x, string a, string b)
{
	bool z, y;
	z = y = false;
	for (int i = 0; i < n; i++) {
		if (*(x.begin_ptr) == a) {
			z = true;
		}
		if (*(x.begin_ptr) == b) {
			y = true;
		}
		x.begin_ptr = x.begin_ptr + 1;
	}
	if (z == true && y == true) {
		return 1;
	}
	else {
		return 0;
	}
	return 0;
}