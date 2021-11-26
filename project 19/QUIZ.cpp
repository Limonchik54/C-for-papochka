#include <iostream>

using namespace std;


void displayQuestion(string question)
{
	cout << question << endl;
}
void checkAnswer(int answer, int trueAnswer)
{
	if (trueAnswer == answer) {
		cout << endl << "вы ответили правильно" << endl;
	}
	else {
		cout << endl << "вы ответили не правильно" << endl;
	}
}
void displayAnswers(string answers[4])
{

	for (int i = 0; i < sizeof(answers); i++) {
		cout << i + 1 << ". " << answers[i] << endl;
	}
	cout << endl;
}
const int questionSize = 15;
int questionArr[questionSize]{};
int answerArr[4]{};
const int answersSize = 4;
int qtyQuestion = 15;
int qtyLive = 5;
string hint = "Да";
bool qtyHint = 1;

int randomArr(int QuestionArr[], int arr) {
	for (int i = 0; i < arr; i++) {
		QuestionArr[i] = 0;
	}
	bool correct = 1;
	for (int i = 0; i < arr; i++) {
		int numberRandom = rand() % arr + 1;
		for (int j = 0; j < arr; j++) {
			if (numberRandom == QuestionArr[j]) {
				correct = 0;
				break;
			}
			else {
				correct = 1;
			}
		}
		if (correct) {
			QuestionArr[i] = numberRandom;
		}
		else {
			i--;
		}
	}
	return 0;
}
struct QuestionStruct {
	string question;
	string answer[4];
	string correct;

};

QuestionStruct question[questionSize] = {
			{"Что означает старорусское слово “нещичка”?",  {"Пирожное", "Морковь", "Щека", "Неженка"}, "Пирожное"},
			{"Птица летающая задом на перед ",  {"Колибри", "Цапля", "Пингвин", "Такой не существует" },"Колибри"},
			{"Полное ФИО преподователя по C++",  {"Николаенко Александр Николаевич", "Орлов Алексей Дмитриевич", "Николаенко Николай Александрович", "Орлов Дмитрий Алексеевич"}, "Орлов Алексей Дмитриевич"},
			{"Начало Второй мировой войны",  {"11 сентября 1941", "1 августа 1945", "1 сентября 1941 ",  "1 сентября 1939"},  "1 сентября 1939"},
			{"Мозг компьютера?",  {"Видеокарта", "Мать", "Процессор", "Оперативка"}, "Процессор"},
			{"Сколько хромосом у человека ? ",  {"43 хромосоны", "44 хромосомы", "46 хромосом ", "47 хромосом"}, "46 хромосом "},
			{"Кто основал Microsoft?",  {"Стив Джобс", "Илон Маск", "Марк Цукерберг", "Билл Гейтс"}, "Билл Гейтс"},
			{"Как называется пространство между ноздрями?", {"Пунт", "Колумелла", "Глабелла", "Носопырка"}, "Колумелла"},
			{"Самое глубокое место в мире ? ", {"Марианская впадина", "Озеро Байкал", "Закатон", "КИДД Майн"},"Марианская впадина"},
			{"Являются ли тротуары и обочины частью дороги?",  {"Не являются", "Являются только тротуары", "Являются", "Являются только обочины"}, "Являются"},
			{"Животное на логотипе Porsche?",  {"Лошадь", "Бык", "Ягуар", "Лев"},"Лошадь"},
			{"Самая большая кошка на планете",  {"Лев", "Мейкун", "Тигр", "кот Борис"}, "Тигр"},
			{"Столицей какой страны является г.Сидней?", {"Австралия", "Австрия", "Нидерланды", "Никакой"}, "Никакой"},
			{"Какое колесо не крутится при повороте?",  {"Заднее", "Запасное", "Переднее", "Рулевое"}, "Запасное"},
			{ "Сколько дней в високосном году?",  {"356 дней", "364 дней", "366 дней", "365 дней"}, "366 дней"},

};
void randomizeQuestions() {
	for (int i = 0; i < questionSize; i++) {
		swap(question[i], question[rand() % 15]);
	}
}

void randomizeAnswers() {
	for (int i = 0; i < questionSize; i++) {
		for (int j = 0; j < answersSize; j++) {
			swap(question[i].answer[j], question[i].answer[rand() % 4]);
		}
	}
}

int startQuiz() {
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < 15; i++)
		
	{
		swap(question[i], question[rand() % 15]);
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 4; j++) {
			swap(question[i].answer[j], question[i].answer[rand() % 4]);
		}
	}
	system("cls");
	int qtyRightAnswer = 0;
	randomArr(questionArr, questionSize);
	for (int i = 0; i < qtyQuestion; i++) {
		randomArr(answerArr, 4);
		cout << "\n\x1b[97m[+] Вопрос " << i + 1 << "\x1b[0m\n\n";
		cout << question[questionArr[i] - 1].question;
		for (int j = 0; j < 4; j++) {
			if (j % 1 == 0 ) {
				cout << "\n\n";
			}
			cout << "[" << j + 1 << "] " << question[questionArr[i] - 1].answer[answerArr[j] - 1] << "\t";
		}
		if (qtyHint) {
			cout << "\n\n\x1b[93m[7] Нажмите 7 для получения подсказки.";
		}
		cout << "\n\n\x1b[97m[+] Ответ: ";
		int answer;
		cin >> answer;
		while (answer > 7) {
			cout << "\n\n\x1b[97m[+] Ответ: ";
			cin >> answer;
		}
		if (answer == 7) {
			cout << "\n\n\x1b[93m[+] Вы использовали подсказку!\x1b[0m";
			int qtyWrongAnswer = 0;
			for (int j = 0; j < 4; j++) {
				if (j % 1 == 0 ) {
					cout << "\n\n";
				}
				if (question[questionArr[i] - 1].answer[answerArr[j] - 1] == question[questionArr[i] - 1].correct) {
					cout << "[" << j + 1 << "] " << question[questionArr[i] - 1].answer[answerArr[j] - 1] << "\t";
				}
				else if (qtyWrongAnswer == 0) {
					cout << "[" << j + 1 << "] " << question[questionArr[i] - 1].answer[answerArr[j] - 1] << "\t";
					qtyWrongAnswer++;
				}
				else {
					cout << "\x1b[30m[" << j + 1 << "] " << question[questionArr[i] - 1].answer[answerArr[j] - 1] << "\x1b[0m\t";
				}
			}

			cout << "\n\n\x1b[97m[+] Ответ: ";
			cin >> answer;
			while (answer > 7) {
				cout << "\n\n\x1b[97m[+] Ответ: ";
				cin >> answer;
			}
			qtyHint = 7;
		}
		system("cls");
		if (question[questionArr[i] - 1].answer[answerArr[answer - 1] - 1] == question[questionArr[i] - 1].correct) {
			qtyRightAnswer ++ ;
			cout << "\n\n\x1b[92mОтвет правильный!Вы получаете +1 балл. У вас " << qtyRightAnswer << " балл(ов)\x1b[0m";
		}
		else {
			qtyLive --;
			cout << "\n\x1b[91mВы ошиблись! Вы теряете 1 жизнь.\x1b[0m";
			cout << "\n Количество жизней: " << qtyLive;
			if (qtyLive == 0) {
				cout << "\n\n\x1b[91m[+] У вас законсились жизни!\n\n";
				system("pause");
				return 0;
			}
		}
		cout << "\n\n";
	}
	

	system("cls");
	cout << "\x1b[93m[+]Вы справились с поставленной задачей!\nПоздравляем!\nМолодец!\n\n\x1bm[96m[+]Количество полученных баллов: " << qtyRightAnswer << "/" << qtyQuestion << "\n\n\n";
	cout << "\x1b[92mСпасибо за участие!\n";
	system("pause");
	cin.get();
	system("cls");
	
	return 0;
}
void rules() {

	
	system("cls");
	cout << "[+]Правила викторины\n";
	cout << "Добро пожаловать в <Правила викторины>.\nВ этой игре вам необходимо ответить на вопрос, выбрав правильный вариант ответа из перечисленных.\nЗа каждый правильно отвеченный вопрос, вам будет начислятся 1 балл.\n\n";


	system("pause");
	cin.get();
	system("cls");
}

int menuSettings()
{
	system("cls");
	
	cout << "[+]Настройки\n";
	cout << "[1]Количество вопросов:" << qtyQuestion << " \n";
	cout << "[2]Количество жизней:" << qtyLive << " \n";
	cout << "[3]Наличие подсказки:" << hint << " \n";
	cout << "[4]Выход\n\n";
	cout << "Выберите пункт из меню: ";
	int settings;
	cin >> settings;
	switch (settings) {
	case 1:
	{
		system("cls");
		cout << "[+]Выберите количество вопросов:\n";
		cout << "[1] 5 вопросов\n";
		cout << "[2] 10 вопросов\n";
		cout << "[3] 15 вопросов\n";
		cout << "[0] Назад\n\n";
		cout << "Выберите пункт из меню: ";
		int choiseQuestion;
		cin >> choiseQuestion;
		switch (choiseQuestion) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			qtyQuestion = 5;
			break;
		}
		case 2:
		{
			qtyQuestion = 10;
			break;
		}
		case 3:
		{
			qtyQuestion = 15;
			break;
		}
		default:
		{
			cout << "Исправь данные и попробуй снова";
			break;
		}
		}
		system("cls");
		menuSettings();
		break;
	}
	case 2:
	{
		cout << "[+]Выберите количество жизней:\n";
		cout << "[1] 1 жизнь\n";
		cout << "[2] 2 жизни\n";
		cout << "[3] 3 жизни\n";
		cout << "[4] 4 жизни\n";
		cout << "[5] 5 жизней\n";
		cout << "[0] Назад\n\n";
		cout << "Выберите пункт из меню: ";
		int choiseLive;
		cin >> choiseLive;
		
		switch (choiseLive) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			qtyLive = 1;
			break;
		}
		case 2:
		{
			qtyLive = 2;
			break;
		}
		case 3:
		{
			qtyLive = 3;
			break;
		}
		case 4:
		{
			qtyLive = 4;
			break;
		}
		case 5:
		{
			qtyLive = 5;
			break;
		}
		default:
		{
			cout << "Исправь данные и попробуй снова";
			break;
		}
		}
		system("cls");
		menuSettings();
		break;
	}
	case 3:
	{
		system("cls");
		cout << "Хотите использовать подсказки?\n";
		cout << "[1]Да\n";
		cout << "[2]Нет\n";
		cout << "[0]Назад\n\n";
		cout << "Выберите пункт из меню: ";
		int choiseHint;
		cin >> choiseHint;
		switch (choiseHint) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			hint = "Да";
			qtyHint = 1;
			break;
		}
		case 2:
		{
			hint = "Нет";
			qtyHint = 0;
			break;
		}
		default:
		{
			cout << "Исправь данные и попробуй снова";
			break;
		}
		}
		system("cls");
		menuSettings();
		break;

	default:
		return 0;
		break;
	}
	}
}

int main()
{
	setlocale(0, "");
	
	int menu;

	cout << "\x1b[92mДобро пожаловать на викторину!\x1b[92m \n\n";
	cout << "[+]Меню\n";
	cout << "[1]Запустить викторину\n";
	cout << "[2]Настройки\n";
	cout << "[3]Правила\n";
	cout << "[4]Выход\n\n";
	cout << "Выберите пункт из меню: ";
	cin >> menu;
	switch (menu) {
	case 0:
	{
		return 0;
		break;
	}
	case 1:
	{
		startQuiz();
		break;
	}
	case 2:
	{
		menuSettings();
		system("cls");
		main();
		break;
	}
	case 3:
	{
		rules();
		system("cls");
		main();
		break;
	}
	default:
	{
		cout << "Исправь данные и попробуй снова";
		system("cls");
		main();
		break;
	}

	}

	int _;cin >> _;
	return 0;
}
