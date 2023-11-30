int main()
{

system("chcp 65001");
system("cls");
int w, n;
map<int, int> input;
map<int, double> output;
cout << "Введите длину ряда" << endl;
cin >> n;

cout << "Введите ширину окна" << endl;
cin >> w;


cout << "Введите ряд" << endl;
double currentSum = 0.0;
for (int i = 0; i < n; i++)
