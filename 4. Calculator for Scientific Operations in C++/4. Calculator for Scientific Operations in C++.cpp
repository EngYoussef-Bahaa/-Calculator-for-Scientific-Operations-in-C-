#include <iostream>
#include<cmath>
#include<string>
#include <cstdlib>
using namespace std;


enum enCalcOP
{
	Exist,
	Basicoperation,
	PowerandRoots,
	Logarithm,
	Percentage,
	Trigonometricfunction,
	Inverseoftrigonometricfunction,
	Convertangle
};
enum enBasicOP{Exit,Add ,sub,mult,dev,ThePreviousTab};
enum enpandrootop{ Exi, Pow, Ro,ThePrevious };
enum enLog{exi,logr,ThePrevio};
enum enTra{ ex, sinn, coss,tann,ThePrevi };
enum eninvTra{ e, sin_, cos_,tan_,ThePre };
enum enangle{ exx, DEG_,Rad_,ThePr };
enum enper{EXIT,PER,THEPRE};
class Calculator
{protected:
	double _Num1=0.0;

public:
	void SetNum1()
	{

		cin >> _Num1;
	      while (cin.fail() )
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "You Should Enter a Number\n";
			cin >> _Num1;
		 }
	}

};
class Calcultor2:public Calculator
{protected:
	double _Num2=0.0;
public:
	void SetNum2()
	{
		
		cin >> _Num2;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "You Should Enter a Number\n";
			cin >> _Num2;
		}
	}

};
class  Basicoperations:public Calcultor2
{
public:
	double	Addition()
	{
		return (_Num1 + _Num2);
    }
	double	subtract()
	{
		return (_Num1 - _Num2);
    }
	double	Multiplication()
	{
		return (_Num1 * _Num2);
    }
	double	Division()
	{
		return (_Num1 / _Num2);
    }
};
class Foundationsandroots:public Calcultor2
{
public:
	double Power()
	{
		return pow(_Num1, _Num2);
	}
	double Roots()
	{
		return pow(_Num1, (1/_Num2));
	}
};
class  Percentages :public Calcultor2 
{public:
	double PersentageofNum()
	{
		return ((_Num2 / 100) * _Num1);
	}
};
class logarithms:public Calcultor2
{
public:
	double logarithm()
	{
		return (_Num2 * log(_Num1));
	}
};
class Calcultor1:public Calculator
{
protected :
	const double PI = 3.141592653589793;
	double ConvertFromRadiantodegree(double Rad)
	{
		return (Rad * (180 / PI));
	}
	 double ConvertFromdegreetoRadian(double deg)
	{
		return (deg * (PI / 180));
	}
public:
	double ConvertFromRadtodeg()
	{
		return (_Num1 * (180 /PI ));
	}

};
class Trigonometricfunctions:public Calcultor1
{
public:
	
	double Sin()
	{
		return sin(ConvertFromdegreetoRadian(_Num1));
    }
	double Cos()
	{

		return cos(ConvertFromdegreetoRadian(_Num1));
	}
	double Tan()
	{

		return tan(ConvertFromdegreetoRadian(_Num1));
	}

};
class Inverseoftrigonometricfunctions :public Calcultor1
{
public:
	
	double INVSin()
	{
		return ConvertFromRadiantodegree(asin(_Num1));
    }
	double INVCos()
	{

		return ConvertFromRadiantodegree(acos(_Num1));
	}
	double INVTan()
	{

		return ConvertFromRadiantodegree(atan(_Num1));
	}

};
class Convertangles :public Calcultor1 
{
public:
     string ConvertFromdegreetoRadian()
	 {	 
		return (to_string(_Num1/ 180)+" PI ");
	 }
};
void FirstTab();

void Welcome()
{cout << "\t\t===================================================\n\n";

	cout << "\t\t         Welcome to Scientific Calculator          \n\n";

	cout << "\t\t===================================================\n\n";


}


void MenuofOperations()
{
	cout << " Basic Operations  [1] \n";
	cout << " Power & Roots     [2] \n";
	cout << " Logarithms        [3] \n";
	cout << " Percentages       [4] \n";
	cout << " Trigonometric functions    [5] \n";
	cout << " Inverse of trigonometric functions    [6] \n";
	cout << " Convertangle    [7] \n";
	cout << " Exist  [0] \n";
	cout << " Enter The Number of Your Choice ^_^\n";
}
enCalcOP ReadMainOperationChoice()
{
	short Num;
	cin >> Num; while (cin.fail() || Num < 0||Num>7)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "You Should Enter Number from 0 to 7 ^_^\n";
		cin >> Num;
	}
	return (enCalcOP)Num;
}



enCalcOP Tab1()
{
	MenuofOperations();
	return ReadMainOperationChoice();
}



void MenuOfBasicOperations()
{
	cout << " Addition            [1] \n";
	cout << " Subtraction         [2] \n";
	cout << " Mutiplication       [3] \n";
	cout << " Division            [4] \n";
	cout << " The Previous Tab    [5] \n";
	cout << " Exist               [0] \n";
	cout << "Enter The Number of Your Choice ^_^\n";

}
enBasicOP readchoiceOfBasicOp()
{
	short Num;
	cin >> Num; while (cin.fail() || Num < 0 || Num>6)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "You Should Enter Number from 0 to 5 ^_^\n";
		cin >> Num;
	}
	return (enBasicOP)Num;
	

}
void Addition()
{
        Basicoperations BOPer;
		cout << "Enter Number 1 ^_^\n";
		BOPer.SetNum1();
		cout << "Enter Number 2 ^_^\n";
		BOPer.SetNum2();
		cout << "Sum = " << BOPer.Addition() << "\n";
}
void Subtraction()
{
        Basicoperations BOPer;
		cout << "Enter Number 1 ^_^\n";
		BOPer.SetNum1();
		cout << "Enter Number 2 ^_^\n";
		BOPer.SetNum2();
		cout << "Sum = " << BOPer.subtract() << "\n";
}
void Multipl()
{
        Basicoperations BOPer;
		cout << "Enter Number 1 ^_^\n";
		BOPer.SetNum1();
		cout << "Enter Number 2 ^_^\n";
		BOPer.SetNum2();
		cout << "Sum = " << BOPer.Multiplication() << "\n";
}
void Divis()
{
        Basicoperations BOPer;
		cout << "Enter Number 1 ^_^\n";
		BOPer.SetNum1();
		cout << "Enter Number 2 ^_^\n";
		BOPer.SetNum2();
		cout << "Sum = " << BOPer.Division() << "\n";
}




void BasicoperationFunction()
{
	
	MenuOfBasicOperations();
	switch (readchoiceOfBasicOp())
	{

	case Add:
		Addition();
		break;

	case sub:
		Subtraction();
		break;

	case mult:
		Multipl();
		break;

	case dev :
		Divis();
		break;

	case ThePreviousTab:
		system("cls");
		FirstTab();
		break;
	case Exit:
		exit(0);
		break;

	}
	
}



void MenuOfPowerandroots()
{
	cout << " Power       [1] \n";
	cout << " Root        [2] \n";
	cout << " The Previous Tab    [3] \n";
	cout << " Exist               [0] \n";
	cout << "Enter The Number of Your Choice ^_^\n";

}
enpandrootop readchoiceOfPowerandroots()
{
	short Num;
	cin >> Num; while (cin.fail() || Num < 0 || Num>3)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "You Should Enter Number from 0 to 5 ^_^\n";
		cin >> Num;
	}
	return (enpandrootop)Num;
}
void Powerf()
{
	Foundationsandroots pr;
	cout << "Enter Number 1  (Base) ^_^\n";
	pr.SetNum1();
	cout << "Enter Number 2    (The foundations)  ^_^\n";
	pr.SetNum2();
	cout << "Sum = " << pr.Power() << "\n";
}
void Rootf()
{
	Foundationsandroots pr;
	cout << "Enter Number 1  (Base) ^_^\n";
	pr.SetNum1();
	cout << "Enter Number 2    (Root)  ^_^\n";
	pr.SetNum2();
	cout << "Sum = " << pr.Roots() << "\n";
	}



void PowerandrootsFunction()
{
	MenuOfPowerandroots();
	switch (readchoiceOfPowerandroots())
	{
	case Pow:
		Powerf();
		break;
	case Ro:
		Rootf();
		break;
	case ThePrevious:
		system("cls");
		FirstTab();
		break;

	case Exi:
		exit(0);
		break;
	}

}



void MenuOfPer()
{
	cout << " Persentage   [1] \n";
	cout << " The Previous Tab    [2] \n";
	cout << " Exist   [0] \n";
	cout << "Enter The Number of Your Choice ^_^\n";
	}
enper readchoiceOfPerOp()
{
	short Num;
	cin >> Num; while (cin.fail() || Num < 0 || Num>2)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "You Should Enter Number from 0 to 2 ^_^\n";
		cin >> Num;
	}
	return (enper)Num;
}
void PERRs()
{
	Percentages P;
	cout << " Enter Main Number  ^_^\n";
	P.SetNum1();
	cout << " Enter Percentage   ^_^\n";
	P.SetNum2();
	cout << "A Value of Percentage = " << P.PersentageofNum() << "\n";
}


void PERFunction()
{
	MenuOfPer();
	switch (readchoiceOfPerOp())
	{
	case EXIT:
		exit(0);
		break;
	case PER:
		PERRs();
		break; 
	case THEPRE:
		system("cls");
		FirstTab();
		break;
	}
}





void MenuOflog()
{
	cout << " log   [1] \n";
	cout << " The Previous Tab    [2] \n";
	cout << " Exist   [0] \n";
	cout << "Enter The Number of Your Choice ^_^\n";

}
enLog readchoiceOflogOp()
{
	short Num;
	cin >> Num; while (cin.fail() || Num < 0 || Num>2)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "You Should Enter Number from 0 to 2 ^_^\n";
		cin >> Num;
	}
	return (enLog)Num;
}
void Logas()
{
	logarithms lolo;
	cout << " [X] log Num  Enter X ^_^\n";
	lolo.SetNum1();
	cout << " X log [Num] Enter Num ^_^\n";
	lolo.SetNum2();
	cout << "Sum = " << lolo.logarithm() << "\n";
}


void LogrithmFunction()
{
	MenuOflog();
	switch (readchoiceOflogOp())
	{
	case exi:
		exit(0);
		break;
	case logr:
		Logas();
		break; 
	case ThePrevio:
		system("cls");
		FirstTab();
		break;
	}
}




void MenuOftrifun()
{
	cout << " Sin    [1] \n";
	cout << " Cos    [2] \n";
	cout << " Tan    [3] \n";
	cout << " The Previous Tab    [4] \n";
	cout << " Exist [0] \n";
	cout << "Enter The Number of Your Choice ^_^\n";

}
enTra readchoicetri()
{
	short Num;
	cin >> Num; while (cin.fail() || Num < 0 || Num>4)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "You Should Enter Number from 0 to 4 ^_^\n";
		cin >> Num;
	}
	return (enTra)Num;
}
void Sinnn()
{
	Trigonometricfunctions T;
	cout << "Enter angle (in deg)\n";
	T.SetNum1();
	cout << "Sin = " << T.Sin() << "\n";
}
void Cosss()
{
	Trigonometricfunctions T;
	cout << "Enter angle (in deg)\n";
	T.SetNum1();
	cout << "Cos = " << T.Cos() << "\n";
}
void Tannn()
{
	Trigonometricfunctions T;
	cout << "Enter angle (in deg)\n";
	T.SetNum1();
	cout << "Sin = " << T.Tan() << "\n";
}



void BasictriFunction()
{

	MenuOftrifun();
	switch (readchoiceOfBasicOp())
	{

	case sinn:
		Sinnn();
		break;

	case coss:
		Cosss();
		break;

	case tann:
		Tannn();
		break;

	case ThePrevi:
		system("cls");
		FirstTab();
		break;
	case ex:
		exit(0);
		break;
	}

}




void MenuOfinvtrifun()
{
	cout << " Sin ^ -1    [1] \n";
	cout << " Cos ^ -1   [2] \n";
	cout << " Tan ^ -1   [3] \n";
	cout << " The Previous Tab    [4] \n";
	cout << " Exist [0] \n";
	cout << "Enter The Number of Your Choice ^_^\n";

}
eninvTra readchoiceOfinvtra()
{
	short Num;
	cin >> Num; while (cin.fail() || Num < 0 || Num>4)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "You Should Enter Number from 0 to 4 ^_^\n";
		cin >> Num;
	}
	return (eninvTra)Num;
}
void invSinnn()
{
	Inverseoftrigonometricfunctions T;
	cout << "Enter Value of sin \n";
	T.SetNum1();
	cout << "Sin ^ -1 = " << T.INVSin() << "\n";
}
void invCosss()
{
	Inverseoftrigonometricfunctions T;
	cout << "Enter Value of cos \n";
	T.SetNum1();
	cout << "Cos ^ -1 = " << T.INVCos() << "\n";
}
void invTannn()
{
	Inverseoftrigonometricfunctions T;
	cout << "Enter Value of tan \n";
	T.SetNum1();
	cout << "Sin ^ -1 = " << T.INVTan() << "\n";
}



void BasicinvtriFunction()
{

	MenuOfinvtrifun();
	switch (readchoiceOfinvtra())
	{

	case sin_:
		invSinnn();
		break;

	case cos_:
		invCosss();
		break;

	case tan_:
		invTannn();
		break;

	case ThePre:
		system("cls");
		FirstTab();
		break;
	case e:
		exit(0);
		break;
	}

}



void MenuOfConvert()
{
	cout << " Convert From Degree to Radian  [1] \n";
	cout << " Convert From Radian  to Degree [2] \n";
	cout << " The Previous Tab    [3] \n";
	cout << " Exist [0] \n";
	cout << "Enter The Number of Your Choice ^_^\n";

}
enangle readchoiceangle()
{
	short Num;
	cin >> Num; while (cin.fail() || Num < 0 || Num>3)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "You Should Enter Number from 0 to 3 ^_^\n";
		cin >> Num;
	}
	return (enangle)Num;
}
void DtoR()
{
	Convertangles c;
	cout << "Enter angle (in deg)\n";
	c.SetNum1();
	cout << "angle in Rad = " << c.ConvertFromdegreetoRadian() << "\n";
}
void RtoD()
{
	Convertangles c;
	cout << "Enter angle (in Radian)\n";
	c.SetNum1();
	cout << "angle in DEG = " << c.ConvertFromRadtodeg() << "\n";
}

void basicConv()
{
	MenuOfConvert();
	switch (readchoiceangle())
	{
	case DEG_:
		DtoR();
		break;

	case Rad_:
		RtoD();
		break;

	case exx:
		exit(0);
		break;

	case ThePr:
		system("cls");
		FirstTab();
		break;

	}

}

void ReadOperationSpecficChoice(enCalcOP Cal)
{
	switch (Cal)
	{
	case Exist:
		exit(0);
		break;
	case Basicoperation:
		BasicoperationFunction();
		break;
	case PowerandRoots:
		PowerandrootsFunction();
		break;
	case Percentage:
		PERFunction();
		break;
	case Logarithm:
		LogrithmFunction();
		break;
	case Trigonometricfunction:
		BasictriFunction();
		break;
	case Inverseoftrigonometricfunction:
		BasicinvtriFunction();
		break;
	case Convertangle:
		basicConv();
		break;
	default :
		break;
	}

}
void ScientificCaclatour()
{
	char tryagin = 'y';
	do
	{
		system("cls");
	FirstTab();
	cout << "\nYou Want to do any operation ? \n";
	cin >> tryagin;
	} while (tryagin=='y'||tryagin=='Y');
	
}

int main()
{
		ScientificCaclatour();
		
 return 0;
}
void FirstTab()
{Welcome();
ReadOperationSpecficChoice (Tab1());
}
