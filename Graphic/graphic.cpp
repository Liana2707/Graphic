
#include "convertion.h"

void SystemConvertion()
{
	string model1, model2;
	cout << "Введите первую цветовую модель: ";
	model1 = ChooseColorModel();
	cout << "Введите вторую цветовую модель: ";
	model2 = ChooseColorModel();


	cout << "RGB и CMY выводят значения от 0 до 255" << endl;
	cout << "HSV H число от 0 до 360, S и V от 0 до 1" << endl;
	cout << "НSl H от 0 до 360, S L от 0 до 1" << endl;
	cout << "CMYK С,M,Y,K значения от 0 до 1" << endl;

	vector<float> coordinates = EnterCoordinates(model1, model2);
	coordinates = ConvertFromModelToModel(model1, model2, coordinates);
	ShowResult(model1, model2, coordinates);
}


int main()
{
	setlocale(LC_ALL, "ru");
	//SystemConvertion();

}

